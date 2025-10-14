import pygame
import random
import sys

# Initialize pygame
pygame.init()

# Screen setup
WIDTH, HEIGHT = 600, 400
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Catch the Ball 🎮")

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
BLUE = (0, 0, 255)

# Clock
clock = pygame.time.Clock()

# Player (rectangle)
player_width, player_height = 80, 10
player_x = WIDTH // 2 - player_width // 2
player_y = HEIGHT - 40
player_speed = 7

# Ball
ball_size = 20
ball_x = random.randint(0, WIDTH - ball_size)
ball_y = 0
ball_speed = 5

# Score
score = 0
font = pygame.font.Font(None, 36)

# Game loop
while True:
    screen.fill(WHITE)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Player movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player_x > 0:
        player_x -= player_speed
    if keys[pygame.K_RIGHT] and player_x < WIDTH - player_width:
        player_x += player_speed

    # Move ball
    ball_y += ball_speed

    # If ball hits bottom
    if ball_y > HEIGHT:
        ball_y = 0
        ball_x = random.randint(0, WIDTH - ball_size)
        score = max(0, score - 1)  # lose a point

    # Collision detection
    if (player_y < ball_y + ball_size and
        player_y + player_height > ball_y and
        player_x < ball_x + ball_size and
        player_x + player_width > ball_x):
        ball_y = 0
        ball_x = random.randint(0, WIDTH - ball_size)
        score += 1  # gain a point

    # Draw player and ball
    pygame.draw.rect(screen, BLUE, (player_x, player_y, player_width, player_height))
    pygame.draw.circle(screen, RED, (ball_x + ball_size // 2, ball_y + ball_size // 2), ball_size // 2)

    # Show score
    text = font.render(f"Score: {score}", True, (0, 0, 0))
    screen.blit(text, (10, 10))

    pygame.display.flip()
    clock.tick(30)
