//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSImmutableDocumentData;

@interface MSManifestMaker : NSObject
{
    BOOL _selectiveExport;
    MSImmutableDocumentData *_doc;
    CDUnknownBlockType _imageProviderBlock;
}

+ (id)manifestForDocument:(id)arg1 withName:(id)arg2 selectiveExport:(BOOL)arg3 imageProviderBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) BOOL selectiveExport; // @synthesize selectiveExport=_selectiveExport;
@property(copy, nonatomic) CDUnknownBlockType imageProviderBlock; // @synthesize imageProviderBlock=_imageProviderBlock;
@property(retain, nonatomic) MSImmutableDocumentData *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (id)metadataAndExportForRootLayer:(id)arg1 onPage:(id)arg2;
- (id)metadataAndExportForArtboardsOnPage:(id)arg1;
- (id)metadataAndExportForPage:(id)arg1;
- (id)metadataAndExportForPages:(id)arg1;
- (id)manifestWithName:(id)arg1;

@end

