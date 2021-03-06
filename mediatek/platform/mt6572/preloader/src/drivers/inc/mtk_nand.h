
#ifndef __MTK_NAND_H__
#define __MTK_NAND_H__

#include "typedefs.h"
#include "platform.h"

//#define TEST_ECC
u32 nand_ecc_test(void);

extern u32 nand_init_device(void);
extern BOOL g_bHwEcc;
/* LEGACY - TO BE REMOVED { */
extern u32 nand_read_data(u8 * buf, u32 offset);
extern u32 nand_write_data(u8 * buf, u32 offset);
extern u32 nand_find_safe_block(u32 offset);
/* LEGACY - TO BE REMOVED } */
extern bool nand_erase_data(u32 offset, u32 offset_limit, u32 size);

#if CFG_LEGACY_USB_DOWNLOAD

extern void nand_wait_ready(void);

extern u32 nand_chksum_per_file(u32 nand_offset, u32 img_size);
extern u32 nand_chksum_body(u32 chksm, char *buf, u32 pktsz);
#endif

#endif                          /* __NAND_COMMON_INTER_H__ */
