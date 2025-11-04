mirror_chars={'A':'A','E':'3','H':'H','J':'L','L':'J','M':'M','O':'O','S':'2','T':'T','U':'U','V':'V','W':'W','X':'X','Y':'Y','Z':'5','1':'1','2':'S','3':'E','5':'Z','8':'8'}
s='HELLO'
print(''.join([mirror_chars.get(ch,ch) for ch in s]))