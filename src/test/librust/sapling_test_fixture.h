// Copyright (c) 2020 The NODETRADE developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef NODETRADE_SAPLING_TEST_FIXTURE_H
#define NODETRADE_SAPLING_TEST_FIXTURE_H

#include "test/test_nodetrade.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup
{
    SaplingTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~SaplingTestingSetup();
};

/**
 * Regtest setup with sapling always active
 */
struct SaplingRegTestingSetup : public SaplingTestingSetup
{
    SaplingRegTestingSetup();
};


#endif //NODETRADE_SAPLING_TEST_FIXTURE_H
