#import "_ManifestMO.h"

@interface ManifestMO : _ManifestMO {}

@property (weak, readonly) NSString *manifestContentsDescription;
@property (weak, readonly) NSImage *image;
@property (weak, readonly) NSString *fileName;
@property (weak, readonly) NSDictionary *manifestInfoDictionary;

- (NSArray *)rootConditionalItems;

@end
