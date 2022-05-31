// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2020 The NODETRADE developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 70921;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT = 70919;
static const int MIN_PEER_PROTO_VERSION_AFTER_ENFORCEMENT = 70921;

//! Version where BIP155 was introduced
static const int MIN_BIP155_PROTOCOL_VERSION = 71000;

// Make sure that none of the values above collide with
// `ADDRV2_FORMAT`.

#endif // BITCOIN_VERSION_H
