
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _HE_SIG_A_MU_UL_INFO_H_
#define _HE_SIG_A_MU_UL_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_HE_SIG_A_MU_UL_INFO 2

struct he_sig_a_mu_ul_info {
             uint32_t format_indication               :  1,
                      bss_color_id                    :  6,
                      spatial_reuse                   : 16,
                      reserved_0a                     :  1,
                      transmit_bw                     :  2,
                      reserved_0b                     :  6;
             uint32_t txop_duration                   :  7,
                      reserved_1a                     :  9,
                      crc                             :  4,
                      tail                            :  6,
                      reserved_1b                     :  6;
};

#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_OFFSET               0x00000000
#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_LSB                  0
#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_MASK                 0x00000001

#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_OFFSET                    0x00000000
#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_LSB                       1
#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_MASK                      0x0000007e

#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_OFFSET                   0x00000000
#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_LSB                      7
#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_MASK                     0x007fff80

#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_LSB                        23
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_MASK                       0x00800000

#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_LSB                        24
#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_MASK                       0x03000000

#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_LSB                        26
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_MASK                       0xfc000000

#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_OFFSET                   0x00000004
#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_LSB                      0
#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_MASK                     0x0000007f

#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_OFFSET                     0x00000004
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_LSB                        7
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_MASK                       0x0000ff80

#define HE_SIG_A_MU_UL_INFO_1_CRC_OFFSET                             0x00000004
#define HE_SIG_A_MU_UL_INFO_1_CRC_LSB                                16
#define HE_SIG_A_MU_UL_INFO_1_CRC_MASK                               0x000f0000

#define HE_SIG_A_MU_UL_INFO_1_TAIL_OFFSET                            0x00000004
#define HE_SIG_A_MU_UL_INFO_1_TAIL_LSB                               20
#define HE_SIG_A_MU_UL_INFO_1_TAIL_MASK                              0x03f00000

#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_OFFSET                     0x00000004
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_LSB                        26
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_MASK                       0xfc000000

#endif
