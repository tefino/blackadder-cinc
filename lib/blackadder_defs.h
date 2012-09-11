/*
 * Copyright (C) 2010-2011  George Parisis and Dirk Trossen
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * Alternatively, this software may be distributed under the terms of
 * the BSD license.
 *
 * See LICENSE and COPYING for more details.
 */

#ifndef BLACKADDER_DEFS_HPP
#define BLACKADDER_DEFS_HPP

/**********************************/
#define PURSUIT_ID_LEN 8 //in bytes
#define FID_LEN 32 //in bytes
#define NODEID_LEN PURSUIT_ID_LEN //in bytes
#define AREA_LENGTH 3 //cinc: the length of area ID in bytes
#define HIGHTLEVEL 3//cinc: the hierachy level
#define EACHAREA 1 //cinc: the length of each area ID
#define LASTLENGTH 5 //cinc: the length of the last component of node ID
/****some strategies*****/
#define NODE_LOCAL          0
#define LINK_LOCAL          1
#define DOMAIN_LOCAL        2
#define IMPLICIT_RENDEZVOUS 3
#define BROADCAST_IF        4
/************************/
/*intra and inter click message types*/
#define PUBLISH_SCOPE 0
#define PUBLISH_INFO 1
#define UNPUBLISH_SCOPE 2
#define UNPUBLISH_INFO 3
#define SUBSCRIBE_SCOPE 4
#define SUBSCRIBE_INFO 5
#define UNSUBSCRIBE_SCOPE 6
#define UNSUBSCRIBE_INFO 7
#define PUBLISH_DATA  8 //the request



#define CONNECT 12
#define DISCONNECT 13
/*****************************/
#define UNDEF_EVENT 0
#define START_PUBLISH 100
#define STOP_PUBLISH 101
#define SCOPE_PUBLISHED 102
#define SCOPE_UNPUBLISHED 103
#define PUBLISHED_DATA 104
#define MATCH_PUB_SUBS 105
#define RV_RESPONSE 106
//our proposal this is for subinfo message destined at publisher
#define PLEASE_PUSH_DATA 107
//cinc information item published
#define INFO_PUBLISHED 108
//cinc tm match pub sub under scope

#define SCOPE_RVS 109
//cinc pub send scope probing message
#define SUB_REQ 110
//cinc sub request to cache routers
#define NOTIFY_AREAINFO 111
//cinc: notify routers about the # of routers in their areas
#define RES_DATA 112
//cinc: response with data
#define CINC_SUB_SCOPE 113
//cinc: subscrip scope
#define RES_FROM_TM 114
//cinc: response from TM including all the FID information
#define CINC_REQ_DATA_CACHE 115
//cinc: request for data from a cache router
#define CINC_REQ_DATA_PUB 116
//cinc: request for data from a publisher node
#define CINC_CACHE_HIT_FAILED 117
//cinc: response from router cache hit failed
#define CINC_ASK_PUB_CACHE 118
/*cinc: RV ask TM to calculate the path from pub to cache router
 *notify the pub to push data to cache router for caching*/
#define CINC_PUSH_TO_CACHE 119
//cinc: RV/TM notify publisher to push data to router for caching
#define CINC_ERASE_ENTRY 120
//cinc: RV notify router erase a cache list entry
#define CINC_CACHE_AGAIN 121
//cinc: cache router ask pub push cache again, this event happens when the cache is flushed in the cache router,
//but its popularity is still high and is requested again by a client
#define CINC_ADD_ENTRY 122
//cinc: RV notify router add a cache list entry



#define PUB 1
#define CACHE 2

#define NETLINK_BADDER 20
#endif /* BLACKADDER_DEFS_HPP */
