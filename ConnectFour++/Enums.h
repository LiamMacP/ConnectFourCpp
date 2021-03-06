#pragma once

enum BoardState : char {
	BLANKSPACE = ' ',
	RED = 'R',
	YELLOW = 'Y'
};

enum Colours : char
{
	REDColour = 'R',
	YELLOWColour = 'Y'
};

enum FinishedGame
{
	Winner,
	NoWinner
};

enum AIDifficulty : int {
	Easiest = 1,
	Easy = 2,
	Moderate = 3,
	Hard = 4
};

enum GameState {
	Playing, 
	NewGameQuery, 
	GameOver
};

enum WinCondition {
	LeftRight,
	UpDown,
	RightDiagonal,
	LeftDiagonal
};