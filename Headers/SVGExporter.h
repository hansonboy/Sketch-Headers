#import "NSObject.h"

@class MSExportRequest, NSAffineTransform, NSMutableDictionary, NSString, NSXMLDocument, NSXMLElement;

@interface SVGExporter : NSObject
{
    BOOL _exportDetailed;
    MSExportRequest *_slice;
    NSString *_mask;
    NSXMLDocument *_doc;
    NSXMLElement *_defs;
    NSXMLElement *_root;
    NSAffineTransform *_initialMove;
    NSMutableDictionary *_gradients;
    unsigned long long _nextUniqueID;
    struct CGSize _documentSize;
    struct CGRect _sliceRect;
}

@property(nonatomic) unsigned long long nextUniqueID; // @synthesize nextUniqueID=_nextUniqueID;
@property(retain, nonatomic) NSMutableDictionary *gradients; // @synthesize gradients=_gradients;
@property(retain, nonatomic) NSAffineTransform *initialMove; // @synthesize initialMove=_initialMove;
@property(retain, nonatomic) NSXMLElement *root; // @synthesize root=_root;
@property(nonatomic) struct CGRect sliceRect; // @synthesize sliceRect=_sliceRect;
@property(retain, nonatomic) NSXMLElement *defs; // @synthesize defs=_defs;
@property(retain, nonatomic) NSXMLDocument *doc; // @synthesize doc=_doc;
@property(nonatomic) BOOL exportDetailed; // @synthesize exportDetailed=_exportDetailed;
@property(retain, nonatomic) NSString *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGSize documentSize; // @synthesize documentSize=_documentSize;
@property(retain, nonatomic) MSExportRequest *slice; // @synthesize slice=_slice;
- (void).cxx_destruct;
- (id)groupElementWithAffineTransform:(id)arg1;
- (id)groupElementWithTranslateX:(int)arg1 Y:(int)arg2;
- (id)radialGradientAttributes:(id)arg1;
- (id)linearGradientAttributes:(id)arg1;
- (id)stopsForGradient:(id)arg1;
- (id)gradientElement:(id)arg1;
- (void)addGradient:(id)arg1;
- (id)hashForGradient:(id)arg1;
- (id)addDefinitionWithWithName:(id)arg1 children:(id)arg2 attributes:(id)arg3;
- (id)uniqueIDForElementWithName:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)normalizePath:(id)arg1;
- (struct CGPoint)normalizePoint:(struct CGPoint)arg1;
- (id)data;
- (id)description;
- (void)exportPage:(id)arg1;
- (id)initWithName:(id)arg1 slice:(id)arg2 detailed:(BOOL)arg3;

@end
