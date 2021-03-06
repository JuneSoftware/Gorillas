/*
 * This file is part of Gorillas.
 *
 *  Gorillas is open software: you can use or modify it under the
 *  terms of the Java Research License or optionally a more
 *  permissive Commercial License.
 *
 *  Gorillas is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  You should have received a copy of the Java Research License
 *  along with Gorillas in the file named 'COPYING'.
 *  If not, see <http://stuff.lhunath.com/COPYING>.
 */

//
//  GorillasAppDelegate.h
//  Gorillas
//
//  Created by Maarten Billemont on 18/10/08.
//  Copyright, lhunath (Maarten Billemont) 2008. All rights reserved.
//

#import "AbstractCocos2DAppDelegate.h"
#import "GameLayer.h"
#import "NewGameLayer.h"
#import "ConfigurationSectionLayer.h"
#import "GameConfigurationLayer.h"
#import "AVConfigurationLayer.h"
#import "ModelsConfigurationLayer.h"
#import "InformationLayer.h"
#import "GuideLayer.h"
#import "FullGameLayer.h"
#import "GHUDLayer.h"
#import "NetController.h"
#import "PlayHaven.h"


@interface GorillasAppDelegate : AbstractCocos2DAppDelegate <PHPreloadDelegate, PHRequestDelegate> {
    
@private
    GameLayer                                                       *_gameLayer;
    NewGameLayer                                                    *_newGameLayer;
    ConfigurationSectionLayer                                       *_configLayer;
    GameConfigurationLayer                                          *_gameConfigLayer;
    AVConfigurationLayer                                            *_avConfigLayer;
    ModelsConfigurationLayer                                        *_modelsConfigLayer;
    InformationLayer                                                *_infoLayer;
    FullGameLayer                                                   *_fullLayer;
    GuideLayer                                                      *_guideLayer;
    
    NetController                                                   *_netController;
    UIView                                                          *_notifierView;
}

@property (nonatomic, readonly, retain) GameLayer                   *gameLayer;
@property (nonatomic, readonly, retain) NewGameLayer                *newGameLayer;
@property (nonatomic, readonly, retain) ConfigurationSectionLayer   *configLayer;
@property (nonatomic, readonly, retain) GameConfigurationLayer      *gameConfigLayer;
@property (nonatomic, readonly, retain) AVConfigurationLayer        *avConfigLayer;
@property (nonatomic, readonly, retain) ModelsConfigurationLayer    *modelsConfigLayer;
@property (nonatomic, readonly, retain) InformationLayer            *infoLayer;
@property (nonatomic, readonly, retain) GuideLayer                  *guideLayer;
@property (nonatomic, readonly, retain) FullGameLayer               *fullLayer;
@property (nonatomic, readonly, retain) GHUDLayer                   *hudLayer;

@property (nonatomic, readonly, retain) NetController               *netController;

-(void) showMainMenu;
-(void) showMainMenuForPlayers:(NSArray *)aPlayersToInvite;
-(void) showConfiguration;
-(void) showGameConfiguration;
-(void) showAVConfiguration;
-(void) showModelsConfiguration;
-(void) showInformation;
-(void) showGuide;
-(void) showFullGame;
-(void) moreGames;

+(GorillasAppDelegate *) get;


@end

