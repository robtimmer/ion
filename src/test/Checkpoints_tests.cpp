// Copyright (c) 2011-2013 The Bitcoin Core developers
// Copyright (c) 2017 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//
// Unit tests for block-chain checkpoints
//

#include "checkpoints.h"

#include "uint256.h"

#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity)
{
    uint256 p259201 = uint256("0x3d8349cb3f0a5764f5d4aa4438adaf0667647e9d8c39e09d1522b3d9131cdf12");
    uint256 p623933 = uint256("0x5293b69ae7d9163759a643782451f934eb6a77c0deaa588dee45f47fb29700f6");
    //BOOST_CHECK(Checkpoints::CheckBlock(259201, p259201));
    //BOOST_CHECK(Checkpoints::CheckBlock(623933, p623933));


    // Wrong hashes at checkpoints should fail:
    //BOOST_CHECK(!Checkpoints::CheckBlock(259201, p623933));
    //BOOST_CHECK(!Checkpoints::CheckBlock(623933, p259201));

    // ... but any hash not at a checkpoint should succeed:
    BOOST_CHECK(Checkpoints::CheckBlock(259201+1, p623933));
    BOOST_CHECK(Checkpoints::CheckBlock(623933+1, p259201));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 623933);
}

BOOST_AUTO_TEST_SUITE_END()
