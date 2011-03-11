/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKPlayer, GKScore, GKGame, NSError;

@interface GKSparseLeaderboard : GKLeaderboard  {
    GKGame *_game;
    GKPlayer *_player;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _totalRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _availableRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _displayedRange;
    NSArray *_availableScores;
    NSArray *_showcasedScores;
    unsigned int _maxLoaded;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _currentRange;
    GKScore *_comparePlayerScore;
    NSError *_error;
}

@property(retain) NSArray * availableScores;
@property(readonly) struct _NSRange { unsigned int location; unsigned int length; } loadedRange;
@property(readonly) BOOL displayLocalPlayer;
@property(readonly) BOOL displayComparePlayer;
@property(readonly) BOOL moreScoresAvailable;
@property(readonly) BOOL showcasedScoresAdjacent;
@property(retain) NSError * error;
@property(retain) GKScore * comparePlayerScore;
@property struct _NSRange { unsigned int location; unsigned int length; } displayedRange;
@property(readonly) struct _NSRange { unsigned int location; unsigned int length; } availableRange;
@property(readonly) struct _NSRange { unsigned int location; unsigned int length; } totalRange;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;


- (id)game;
- (void)setPlayer:(id)arg1;
- (BOOL)displayComparePlayer;
- (id)availableScores;
- (void)setAvailableScores:(id)arg1;
- (BOOL)displayLocalPlayer;
- (BOOL)moreScoresAvailable;
- (id)scoreAtIndex:(unsigned int)arg1;
- (id)visibleScoreAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })loadedRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeToLoadForRank:(unsigned int)arg1;
- (id)showcasedScoreAtShowcaseIndex:(unsigned int)arg1;
- (BOOL)showcasedScoresAdjacent;
- (void)swapScores;
- (void)loadScoresInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withCompletionHandler:(id)arg2;
- (id)comparePlayerScore;
- (void)setComparePlayerScore:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayedRange;
- (void)setDisplayedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })availableRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })totalRange;
- (id)initWithGame:(id)arg1;
- (id)player;
- (void)setGame:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)setError:(id)arg1;

@end