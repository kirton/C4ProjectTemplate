//
//  C4Sound.h
//  C4A
//
//  Created by Travis Kirton on 11-02-08.
//  Copyright 2011 Travis Kirton. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface C4Sound : C4Object {
	@private
	NSSound *sound;
}

+(C4Sound *)systemSound:(NSString *)soundName;
+(C4Sound *)soundWithName:(NSString *)file andType:(NSString *)extension;
-(id)initWithName:(NSString *)file andType:(NSString *)extension;
-(id)initWithSystemSound:(NSString *)soundName;

-(CGFloat)volume;
-(void)setVolume:(CGFloat)volume;

-(CGFloat)duration;
-(CGFloat)currentTime;
-(void)setCurrentTime:(CGFloat)seconds;

-(BOOL)loops;
-(void)setLoops:(BOOL)loops;

-(BOOL)isPlaying;
-(void)pause;
-(void)play;
-(void)resume;
-(void)stop;
@end