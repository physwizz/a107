#ifndef __AW88194_H__
#define __AW88194_H__


#define AW88194_NUM_RATES			(9)
#define AW88194_SYSST_CHECK_MAX			(10)

#define AW88194_VBAT_COEFF_INT_10BIT		(1023)

#define AW88194_DSP_I2C_WRITES
#define AW88194_MAX_RAM_WRITE_BYTE_SIZE		(128)

enum {
	AW88194_VOL_LIMIT_35 = 3500,
	AW88194_VOL_LIMIT_36 = 3600,
	AW88194_VOL_LIMIT_37 = 3700,
	AW88194_VOL_LIMIT_38 = 3800,
	AW88194_VOL_LIMIT_39 = 3900,
	AW88194_VOL_LIMIT_40 = 4000,
};

enum {
	AW88194_TEMP_LIMIT_NEG_5 = -5,
	AW88194_TEMP_LIMIT_NEG_2 = -2,
	AW88194_TEMP_LIMIT_0 = 0,
	AW88194_TEMP_LIMIT_2 = 2,
	AW88194_TEMP_LIMIT_5 = 5,
	AW88194_TEMP_LIMIT_7 = 7,
};

enum {
	AW88194_IPEAK_350 = 0X04,
	AW88194_IPEAK_300 = 0X02,
	AW88194_IPEAK_275 = 0X01,
	AW88194_IPEAK_250 = 0X00,
	AW88194_IPEAK_NONE = 0XFF,
};

enum {
	AW88194_GAIN_00DB = 0X00,
	AW88194_GAIN_NEG_05DB = 0X01,
	AW88194_GAIN_NEG_10DB = 0X02,
	AW88194_GAIN_NEG_15DB = 0X03,
	AW88194_GAIN_NEG_30DB = 0X06,
	AW88194_GAIN_NEG_45DB = 0X09,
	AW88194_GAIN_NEG_60DB = 0X10,
	AW88194_GAIN_NONE = 0XFF,
};

enum {
	AW88194_VMAX_80 = 0XFA41,
	AW88194_VMAX_70 = 0XF918,
	AW88194_VMAX_60 = 0XF7C2,
	AW88194_VMAX_50 = 0XF6C2,
	AW88194_VMAX_NONE = 0XFFFF,
};

enum aw88194_baseaddr {
	AW88194_SPK_REG_ADDR = 0x00,
	AW88194_SPK_DSP_FW_ADDR = 0x8c00,
	AW88194_SPK_DSP_CFG_ADDR = 0x8600,
	AW88194_RCV_REG_ADDR = 0x00,
	AW88194_RCV_DSP_FW_ADDR = 0x8c00,
	AW88194_RCV_DSP_CFG_ADDR = 0x8600,
	AW88194_BASE_ADDR_MAX = 6,
};


enum aw88194_memclk {
	AW88194_MEMCLK_OSC = 0,
	AW88194_MEMCLK_PLL = 1,
};

enum aw88194_init {
	AW88194_INIT_ST = 0,
	AW88194_INIT_OK = 1,
	AW88194_INIT_NG = 2,
};

enum aw88194_dsp_cfg {
	AW88194_DSP_WORK = 0,
	AW88194_DSP_BYPASS = 1,
};

struct aw88194_container {
	int len;
	unsigned char data[];
};

void aw88194_ops(void *aw881xx);


#endif
