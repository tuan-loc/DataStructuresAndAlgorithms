// Title: The Boggle Game
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * The language PigEwu has a very simple syntax. Each word in this language has exactly 4 letters. Also each word contains exactly two
 * vowels (y is consider a vowel in PigEwu). For instance, “maar” and “even” are legitimate words, “arts” is not a legal word.
 * 
 * In the game boggle, you are given a 4×4 array of letters and asked to find all words contained in it. A word in our case (PigEwu) will thus
 * be a sequence of 4 distinct squares (letters) that form a legal word and such that each square touches (have a corner or edge in common)
 * the next square.
 * 
 * For example:
 * 
 * A S S D
 * S B E Y
 * G F O I
 * H U U K
 * 
 * In this board a (partial) list of legal words include:
 * 
 * ASGU SABO FOIK FOYD SYDE HUFO
 * 
 * BEBO is a legal word but it is not on this boggle board (there are no two B’s here).
 * 
 * Write a program that reads a pair of Boggle boards and lists all PigEwu words that are common to both boards.
 *
 * Input:
 * The input file will include a few data sets. Each data set will be a pair of boards as shown in the sample input. All entries will be upper case
 * letters. Two consecutive entries on same board will be separated by one blank. The first row in the first board will be on the same line as
 * the first row of the second board. They will be separated by four spaces, the same will hold for the remaining 3 rows. Board pairs will be
 * separated by a blank line. The file will be terminated by ‘#’.
 *
 * Output:
 * For each pair of boggle boards, output an alphabetically-sorted list of all common words, each word on a separate line; or the statement
 * There are no common words for this pair of boggle boards.
 * 
 * Separate the output for each pair of boggle boards with a blank line.
 *
 * Example 1:
 * Input:
 * D F F B    W A S U
 * T U G I    B R E T
 * O K J M    Y A P Q
 * K M B E    L O Y R
 * 
 * Z W A V    G S F U
 * U N C O    A H F T
 * Y T G I    G N A L
 * H G P M    B O O B
 * 
 * #
 *
 * Output:
 * There are no common words for this pair of boggle boards.
 * 
 * ANGO
 * AOGN
 * GNAO
 * GOAN
 * NAOG
 * NGOA
 * OANG
 * OGNA
 **/
