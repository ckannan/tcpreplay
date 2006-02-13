/* $Id:$ */

/*
 * Copyright (c) 2004-2005 Aaron Turner <aturner@pobox.com>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the names of the copyright owners nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
 #ifndef __TCPREWRITE_H__
 #define __TCPREWRITE_H__
 
 
#include "config.h"
#include "defines.h"
#include "tcpedit.h"

/* runtime options */
struct tcprewrite_opt_s {
    /* input and output pcap filenames & handles */
    char *infile;
    char *outfile;
    pcap_t *pin;
    pcap_dumper_t *pout;
    libnet_t *l;

    /* tcpprep cache data */
    COUNTER cache_packets;
    char *cachedata;
 
    /* tcpprep cache file comment */
    char *comment; 

#ifdef HAVE_TCPDUMP
    /* tcpdump verbose printing */
    int verbose;
    char *tcpdump_args;
#endif
    tcpedit_t *tcpedit;

};

typedef struct tcprewrite_opt_s tcprewrite_opt_t;

#endif /* __TCPREWRITE_H__ */


/*
 Local Variables:
 mode:c
 indent-tabs-mode:nil
 c-basic-offset:4
 End:
*/
