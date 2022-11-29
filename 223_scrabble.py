#	2022-11-29
#		12:28 - 13:38 (during lecture)

collection = ['vsdkfsfgsr', 'efaesfw', 'eaferf', 'aefaef', 'oodsjcie']

def split_into_lists_of_chars(collection_1):
	list_of_lists = []
	for i in collection_1:
		list_of_lists.append([*i])
	return list_of_lists

def can_a_player_make_a_word(collection, word, i):
	possible_for_one_player = True
	list_of_lists = split_into_lists_of_chars(collection)
	for character in word:
		if character in list_of_lists[i]:
			list_of_lists[i].remove(character)
		elif character not in list_of_lists[i]:
			possible_for_one_player = False
			break
	return possible_for_one_player

def canMakeWord(collection_1, word):
	possible = False
	list_of_lists = split_into_lists_of_chars(collection_1)
	for i in range(len(collection_1)):
		if can_a_player_make_a_word(collection, word, i) == True:
			possible = True
			break
	return possible

print(canMakeWord(collection, 'aef'))