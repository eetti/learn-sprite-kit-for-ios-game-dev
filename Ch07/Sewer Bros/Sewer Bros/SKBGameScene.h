//
//  SKBGameScene.h
//  Sewer Bros
//
//  Created by admin on 8/27/13.
//  Copyright (c) 2013 Apress. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "SKBAppDelegate.h"
#import "SKBLedge.h"
#import "SKBScores.h"
#import "SKBPlayer.h"
#import "SKBCoin.h"
#import "SKBRatz.h"

#define kEnemySpawnEdgeBufferX       60
#define kEnemySpawnEdgeBufferY       60


@interface SKBGameScene : SKScene <SKPhysicsContactDelegate>

@property (strong, nonatomic) SKBPlayer *playerSprite;
@property (strong, nonatomic) SKBSpriteTextures *spriteTextures;
@property (strong, nonatomic) NSArray *cast_TypeArray, *cast_DelayArray, *cast_StartXindexArray;

@property int spawnedEnemyCount;
@property BOOL enemyIsSpawningFlag;

@property (nonatomic, strong) SKBScores *scoreDisplay;
@property int playerScore;

@end
