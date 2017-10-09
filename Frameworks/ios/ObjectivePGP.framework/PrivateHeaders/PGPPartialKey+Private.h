//
//  Copyright (c) Marcin Krzyżanowski. All rights reserved.
//
//  THIS SOURCE CODE AND ANY ACCOMPANYING DOCUMENTATION ARE PROTECTED BY
//  INTERNATIONAL COPYRIGHT LAW. USAGE IS BOUND TO THE LICENSE AGREEMENT.
//  This notice may not be removed from this file.
//

#import <ObjectivePGP/ObjectivePGP.h>

NS_ASSUME_NONNULL_BEGIN

@interface PGPPartialKey ()

@property (nonatomic, readwrite) PGPPartialKeyType type;
@property (nonatomic, nullable, copy, readwrite) NSArray<PGPSignaturePacket *> *directSignatures;
@property (nonatomic, nullable, copy, readwrite) PGPSignaturePacket *revocationSignature;

- (void)loadPackets:(NSArray<PGPPacket *> *)packets NS_REQUIRES_SUPER;

@end

NS_ASSUME_NONNULL_END
