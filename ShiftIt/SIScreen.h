//
//  Created by krikava on 01/12/11.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface SIScreen : NSObject

@property (readonly) NSSize size;
@property (readonly) NSRect visibleRect;
@property (readonly) NSRect rect;
@property (readonly) BOOL primary;

+ (SIScreen *) primaryScreen;
+ (NSArray *) screens;
+ (SIScreen *) screenFromNSScreen:(NSScreen *)screen;
+ (SIScreen *) screenForWindowGeometry:(NSRect)geometry;

- (id) initWithNSScreen:(NSScreen *)screen;
- (SIScreen *) previousScreen;
- (SIScreen *) nextScreen;
- (BOOL)isEqualToScreen:(SIScreen *)screen;

@end