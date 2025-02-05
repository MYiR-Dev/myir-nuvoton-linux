#ifndef _PHY_H_
#define _PHY_H_


/* configuration for driver */

#define YT8614_MAX_LPORT_ID		3

#define YT8614_PHY_MODE_FIBER	1 //fiber mode only
#define YT8614_PHY_MODE_UTP		2 //utp mode only
#define YT8614_PHY_MODE_POLL	3 //fiber and utp, poll mode

/* please make choice according to system design
 * for Fiber only system, please define YT8614_PHY_MODE_CURR 1
 * for UTP only system, please define YT8614_PHY_MODE_CURR 2
 * for combo system, please define YT8614_PHY_MODE_CURR 3 
 */
#define YT8614_PHY_MODE_CURR	3



/* pls dont modify below lines */

// #define PHY_ID_YT8614  0x4F51E899 //serdes
#define MOTORCOMM_MPHY_ID_MASK_8614 0xffffffff

#ifndef BOOL
#define BOOL unsigned int
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef SPEED_1000M
#define SPEED_1000M     2
#endif
#ifndef SPEED_100M
#define SPEED_100M     	1
#endif
#ifndef SPEED_10M
#define SPEED_10M     	0
#endif

#ifndef SPEED_UNKNOWN
#define SPEED_UNKNOWN   0xffff
#endif

#ifndef DUPLEX_FULL
#define DUPLEX_FULL		1	
#endif
#ifndef DUPLEX_HALF
#define DUPLEX_HALF		0	
#endif

#ifndef BIT
#define BIT(n) (0x1<<(n))
#endif
#ifndef s32
typedef int  s32;
typedef unsigned int  u32;
typedef unsigned short  u16;
typedef unsigned char  u8;
#endif

#ifndef REG_PHY_SPEC_STATUS
#define REG_PHY_SPEC_STATUS		0x11
#define REG_DEBUG_ADDR_OFFSET		0x1e
#define REG_DEBUG_DATA			0x1f
#endif

/**********YT8614************************************************/

#define YT8614_SMI_SEL_PHY        0x0
#define YT8614_SMI_SEL_SDS_QSGMII 0x02
#define YT8614_SMI_SEL_SDS_SGMII  0x03

/* yt8614 register type */
#define YT8614_TYPE_COMMON         0x01
#define YT8614_TYPE_UTP_MII        0x02
#define YT8614_TYPE_UTP_EXT        0x03
#define YT8614_TYPE_LDS_MII        0x04
#define YT8614_TYPE_UTP_MMD        0x05
#define YT8614_TYPE_SDS_QSGMII_MII 0x06
#define YT8614_TYPE_SDS_SGMII_MII  0x07
#define YT8614_TYPE_SDS_QSGMII_EXT 0x08
#define YT8614_TYPE_SDS_SGMII_EXT  0x09

/* YT8614 extended common register */
#define YT8614_REG_COM_SMI_MUX        0xA000
#define YT8614_REG_COM_SLED_CFG0      0xA001
#define YT8614_REG_COM_PHY_ID         0xA002
#define YT8614_REG_COM_CHIP_VER       0xA003
#define YT8614_REG_COM_SLED_CFG       0xA004
#define YT8614_REG_COM_MODE_CHG_RESET 0xA005
#define YT8614_REG_COM_SYNCE0_CFG     0xA006
#define YT8614_REG_COM_CHIP_MODE      0xA007

#define YT8614_REG_COM_HIDE_SPEED     0xA009

#define YT8614_REG_COM_SYNCE1_CFG     0xA00E

#define YT8614_REG_COM_HIDE_FIBER_MODE 0xA019


#define YT8614_REG_COM_HIDE_SEL1      0xA054
#define YT8614_REG_COM_HIDE_LED_CFG2  0xB8
#define YT8614_REG_COM_HIDE_LED_CFG3  0xB9
#define YT8614_REG_COM_HIDE_LED_CFG5  0xBB

#define YT8614_REG_COM_HIDE_LED_CFG4  0xBA //not used currently

#if 0
#define YT8614_REG_COM_HIDE_LED12_CFG 0xA060 //not used currently
#define YT8614_REG_COM_HIDE_LED13_CFG 0xA061
#define YT8614_REG_COM_HIDE_LED14_CFG 0xA062
#define YT8614_REG_COM_HIDE_LED15_CFG 0xA063
#define YT8614_REG_COM_HIDE_LED16_CFG 0xA064
#define YT8614_REG_COM_HIDE_LED17_CFG 0xA065
#define YT8614_REG_COM_HIDE_LED18_CFG 0xA066
#define YT8614_REG_COM_HIDE_LED19_CFG 0xA067
#define YT8614_REG_COM_HIDE_LED20_CFG 0xA068
#define YT8614_REG_COM_HIDE_LED21_CFG 0xA069
#define YT8614_REG_COM_HIDE_LED22_CFG 0xA06A
#define YT8614_REG_COM_HIDE_LED23_CFG 0xA06B
#define YT8614_REG_COM_HIDE_LED24_CFG 0xA06C
#define YT8614_REG_COM_HIDE_LED25_CFG 0xA06D
#define YT8614_REG_COM_HIDE_LED26_CFG 0xA06E
#define YT8614_REG_COM_HIDE_LED27_CFG 0xA06F
#endif

#define YT8614_REG_COM_HIDE_LED28_CFG 0xA070
#define YT8614_REG_COM_HIDE_LED29_CFG 0xA071
#define YT8614_REG_COM_HIDE_LED30_CFG 0xA072
#define YT8614_REG_COM_HIDE_LED31_CFG 0xA073
#define YT8614_REG_COM_HIDE_LED32_CFG 0xA074
#define YT8614_REG_COM_HIDE_LED33_CFG 0xA075
#define YT8614_REG_COM_HIDE_LED34_CFG 0xA076
#define YT8614_REG_COM_HIDE_LED35_CFG 0xA077

#define YT8614_REG_COM_PKG_CFG0       0xA0A0
#define YT8614_REG_COM_PKG_CFG1       0xA0A1
#define YT8614_REG_COM_PKG_CFG2       0xA0A2
#define YT8614_REG_COM_PKG_RX_VALID0  0xA0A3
#define YT8614_REG_COM_PKG_RX_VALID1  0xA0A4
#define YT8614_REG_COM_PKG_RX_OS0     0xA0A5
#define YT8614_REG_COM_PKG_RX_OS1     0xA0A6
#define YT8614_REG_COM_PKG_RX_US0     0xA0A7
#define YT8614_REG_COM_PKG_RX_US1     0xA0A8
#define YT8614_REG_COM_PKG_RX_ERR     0xA0A9
#define YT8614_REG_COM_PKG_RX_OS_BAD  0xA0AA
#define YT8614_REG_COM_PKG_RX_FRAG    0xA0AB
#define YT8614_REG_COM_PKG_RX_NOSFD   0xA0AC
#define YT8614_REG_COM_PKG_TX_VALID0  0xA0AD
#define YT8614_REG_COM_PKG_TX_VALID1  0xA0AE
#define YT8614_REG_COM_PKG_TX_OS0     0xA0AF

#define YT8614_REG_COM_PKG_TX_OS1     0xA0B0
#define YT8614_REG_COM_PKG_TX_US0     0xA0B1
#define YT8614_REG_COM_PKG_TX_US1     0xA0B2
#define YT8614_REG_COM_PKG_TX_ERR     0xA0B3
#define YT8614_REG_COM_PKG_TX_OS_BAD  0xA0B4
#define YT8614_REG_COM_PKG_TX_FRAG    0xA0B5
#define YT8614_REG_COM_PKG_TX_NOSFD   0xA0B6
#define YT8614_REG_COM_PKG_CFG3       0xA0B7
#define YT8614_REG_COM_PKG_AZ_CFG     0xA0B8
#define YT8614_REG_COM_PKG_DA_SA_CFG3 0xA0B9

#define YT8614_REG_COM_MANU_HW_RESET  0xA0C0

/* YT8614 UTP MII register: same as generic phy register definitions */
#define REG_MII_BMCR          0x00    /* Basic mode control register */
#define REG_MII_BMSR          0x01    /* Basic mode status register  */
#define REG_MII_PHYSID1       0x02    /* PHYS ID 1                   */
#define REG_MII_PHYSID2       0x03    /* PHYS ID 2                   */
#define REG_MII_ADVERTISE     0x04    /* Advertisement control reg   */
#define REG_MII_LPA           0x05    /* Link partner ability reg    */
#define REG_MII_EXPANSION     0x06    /* Expansion register          */
#define REG_MII_NEXT_PAGE     0x07    /* Next page register          */
#define REG_MII_LPR_NEXT_PAGE 0x08    /* LPR next page register      */
#define REG_MII_CTRL1000      0x09    /* 1000BASE-T control          */
#define REG_MII_STAT1000      0x0A    /* 1000BASE-T status           */

#define REG_MII_MMD_CTRL      0x0D    /* MMD access control register */
#define REG_MII_MMD_DATA      0x0E    /* MMD access data register    */

#define REG_MII_ESTATUS       0x0F    /* Extended Status             */
#define REG_MII_SPEC_CTRL     0x10    /* PHY specific func control   */
#define REG_MII_SPEC_STATUS   0x11    /* PHY specific status         */
#define REG_MII_INT_MASK      0x12    /* Interrupt mask register     */
#define REG_MII_INT_STATUS    0x13    /* Interrupt status register   */
#define REG_MII_DOWNG_CTRL    0x14    /* Speed auto downgrade control*/
#define REG_MII_RERRCOUNTER   0x15    /* Receive error counter       */

#define REG_MII_EXT_ADDR      0x1E    /* Extended reg's address      */
#define REG_MII_EXT_DATA      0x1F    /* Extended reg's date         */

#ifndef MII_BMSR
#define MII_BMSR						REG_MII_BMSR
#endif

#ifndef YT8614_SPEED_MODE_BIT
#define YT8614_SPEED_MODE		0xc000
#define YT8614_DUPLEX			0x2000
#define YT8614_SPEED_MODE_BIT		14
#define YT8614_DUPLEX_BIT		13
#define YT8614_LINK_STATUS_BIT		10

#endif

#define YT8614_REG_COM_HIDE_SPEED_CMB_PRI		0x2000

/* YT8614 UTP MMD register  */
#define YT8614_REG_UTP_MMD_CTRL1           0x00    /* PCS control 1 register     */
#define YT8614_REG_UTP_MMD_STATUS1         0x01    /* PCS status 1 register      */
#define YT8614_REG_UTP_MMD_EEE_CTRL        0x14    /* EEE control and capability */
#define YT8614_REG_UTP_MMD_EEE_WK_ERR_CNT  0x16    /* EEE wake error counter     */
#define YT8614_REG_UTP_MMD_EEE_LOCAL_ABI   0x3C    /* local device EEE ability   */
#define YT8614_REG_UTP_MMD_EEE_LP_ABI      0x3D    /* link partner EEE ability   */
#define YT8614_REG_UTP_MMD_EEE_AUTONEG_RES 0x8000  /* autoneg result of EEE      */

/* YT8614 UTP EXT register  */
#define YT8614_REG_UTP_EXT_LPBK        0x0A
#define YT8614_REG_UTP_EXT_SLEEP_CTRL1 0x27
#define YT8614_REG_UTP_EXT_DEBUG_MON1  0x5A
#define YT8614_REG_UTP_EXT_DEBUG_MON2  0x5B
#define YT8614_REG_UTP_EXT_DEBUG_MON3  0x5C
#define YT8614_REG_UTP_EXT_DEBUG_MON4  0x5D

/* YT8614 SDS(1.25G/5G) MII register: same as YT8521S */
#define REG_SDS_BMCR          0x00    /* Basic mode control register */
#define REG_SDS_BMSR          0x01    /* Basic mode status register  */
#define REG_SDS_PHYSID1       0x02    /* PHYS ID 1                   */
#define REG_SDS_PHYSID2       0x03    /* PHYS ID 2                   */
#define REG_SDS_ADVERTISE     0x04    /* Advertisement control reg   */
#define REG_SDS_LPA           0x05    /* Link partner ability reg    */
#define REG_SDS_EXPANSION     0x06    /* Expansion register          */
#define REG_SDS_NEXT_PAGE     0x07    /* Next page register          */
#define REG_SDS_LPR_NEXT_PAGE 0x08    /* LPR next page register      */

#define REG_SDS_ESTATUS       0x0F    /* Extended Status             */
#define REG_SDS_SPEC_STATUS   0x11    /* SDS specific status         */

#define REG_SDS_100FX_CFG     0x14    /* 100fx cfg                   */
#define REG_SDS_RERRCOUNTER   0x15    /* Receive error counter       */
#define REG_SDS_LINT_FAIL_CNT 0x16    /* Lint fail counter mon       */

/* YT8614 SDS(5G) EXT register */
#define YT8614_REG_QSGMII_EXT_ANA_DIG_CFG 0x02    /* sds analog digital interface cfg */
#define YT8614_REG_QSGMII_EXT_PRBS_CFG1   0x05    /* sds prbs cfg1 */
#define YT8614_REG_QSGMII_EXT_PRBS_CFG2_1 0x06    /* sds prbs cfg2 */
#define YT8614_REG_QSGMII_EXT_PRBS_CFG2_2 0x07    /* sds prbs cfg2 */
#define YT8614_REG_QSGMII_EXT_PRBS_MON1   0x08    /* sds prbs mon1 */
#define YT8614_REG_QSGMII_EXT_PRBS_MON2   0x09    /* sds prbs mon2 */
#define YT8614_REG_QSGMII_EXT_PRBS_MON3   0x0A    /* sds prbs mon3 */
#define YT8614_REG_QSGMII_EXT_PRBS_MON4   0x0B    /* sds prbs mon4 */
#define YT8614_REG_QSGMII_EXT_PRBS_MON5   0x0C    /* sds prbs mon5 */
#define YT8614_REG_QSGMII_EXT_ANA_CFG2    0xA1    /* Analog cfg2   */

/* YT8614 SDS(1.25G) EXT register */
#define YT8614_REG_SGMII_EXT_PRBS_CFG1    0x05    /* sds prbs cfg1 */
#define YT8614_REG_SGMII_EXT_PRBS_CFG2    0x06    /* sds prbs cfg2 */
#define YT8614_REG_SGMII_EXT_PRBS_MON1    0x08    /* sds prbs mon1 */
#define YT8614_REG_SGMII_EXT_PRBS_MON2    0x09    /* sds prbs mon2 */
#define YT8614_REG_SGMII_EXT_PRBS_MON3    0x0A    /* sds prbs mon3 */
#define YT8614_REG_SGMII_EXT_PRBS_MON4    0x0B    /* sds prbs mon4 */
#define YT8614_REG_SGMII_EXT_PRBS_MON5    0x0C    /* sds prbs mon5 */
#define YT8614_REG_SGMII_EXT_ANA_CFG2     0xA1    /* Analog cfg2   */
#define YT8614_REG_SGMII_EXT_HIDE_AUTO_SEN 0xA5   /* Fiber auto sensing */

////////////////////////////////////////////////////////////////////
#define YT8614_MMD_DEV_ADDR1     0x1
#define YT8614_MMD_DEV_ADDR3     0x3
#define YT8614_MMD_DEV_ADDR7     0x7
#define YT8614_MMD_DEV_ADDR_NONE 0xFF

/**********YT8521S************************************************/
/* Basic mode control register(0x00) */
#define BMCR_RESV         0x003f  /* Unused...                   */
#define BMCR_SPEED1000    0x0040  /* MSB of Speed (1000)         */
#define BMCR_CTST         0x0080  /* Collision test              */
#define BMCR_FULLDPLX     0x0100  /* Full duplex                 */
#define BMCR_ANRESTART    0x0200  /* Auto negotiation restart    */
#define BMCR_ISOLATE      0x0400  /* Disconnect DP83840 from MII */
#define BMCR_PDOWN        0x0800  /* Powerdown the DP83840       */
#define BMCR_ANENABLE     0x1000  /* Enable auto negotiation     */
#define BMCR_SPEED100     0x2000  /* Select 100Mbps              */
#define BMCR_LOOPBACK     0x4000  /* TXD loopback bits           */
#define BMCR_RESET        0x8000  /* Reset the DP83840           */

/* Basic mode status register(0x01) */
#define BMSR_ERCAP        0x0001  /* Ext-reg capability          */
#define BMSR_JCD          0x0002  /* Jabber detected             */
#define BMSR_LSTATUS      0x0004  /* Link status                 */
#define BMSR_ANEGCAPABLE  0x0008  /* Able to do auto-negotiation */
#define BMSR_RFAULT       0x0010  /* Remote fault detected       */
#define BMSR_ANEGCOMPLETE 0x0020  /* Auto-negotiation complete   */
#define BMSR_RESV         0x00c0  /* Unused...                   */
#define BMSR_ESTATEN      0x0100  /* Extended Status in R15      */
#define BMSR_100HALF2     0x0200  /* Can do 100BASE-T2 HDX       */
#define BMSR_100FULL2     0x0400  /* Can do 100BASE-T2 FDX       */
#define BMSR_10HALF       0x0800  /* Can do 10mbps, half-duplex  */
#define BMSR_10FULL       0x1000  /* Can do 10mbps, full-duplex  */
#define BMSR_100HALF      0x2000  /* Can do 100mbps, half-duplex */
#define BMSR_100FULL      0x4000  /* Can do 100mbps, full-duplex */
#define BMSR_100BASE4     0x8000  /* Can do 100mbps, 4k packets  */

/* Advertisement control register(0x04) */
#define ADVERTISE_SLCT          0x001f  /* Selector bits               */
#define ADVERTISE_CSMA          0x0001  /* Only selector supported     */
#define ADVERTISE_10HALF        0x0020  /* Try for 10mbps half-duplex  */
#define ADVERTISE_1000XFULL     0x0020  /* Try for 1000BASE-X full-duplex */
#define ADVERTISE_10FULL        0x0040  /* Try for 10mbps full-duplex  */
#define ADVERTISE_1000XHALF     0x0040  /* Try for 1000BASE-X half-duplex */
#define ADVERTISE_100HALF       0x0080  /* Try for 100mbps half-duplex */
#define ADVERTISE_1000XPAUSE    0x0080  /* Try for 1000BASE-X pause    */
#define ADVERTISE_100FULL       0x0100  /* Try for 100mbps full-duplex */
#define ADVERTISE_1000XPSE_ASYM 0x0100  /* Try for 1000BASE-X asym pause */
#define ADVERTISE_100BASE4      0x0200  /* Try for 100mbps 4k packets  */
#define ADVERTISE_PAUSE_CAP     0x0400  /* Try for pause               */
#define ADVERTISE_PAUSE_ASYM    0x0800  /* Try for asymetric pause     */
#define ADVERTISE_RESV          0x1000  /* Unused...                   */
#define ADVERTISE_RFAULT        0x2000  /* Say we can detect faults    */
#define ADVERTISE_LPACK         0x4000  /* Ack link partners response  */
#define ADVERTISE_NPAGE         0x8000  /* Next page bit               */

#define ADVERTISE_FULL (ADVERTISE_100FULL | ADVERTISE_10FULL | ADVERTISE_CSMA)
#define ADVERTISE_ALL  (ADVERTISE_10HALF  | ADVERTISE_10FULL | \
                        ADVERTISE_100HALF | ADVERTISE_100FULL)

/* Link partner ability register(0x05) */
#define LPA_SLCT              0x001f  /* Same as advertise selector    */
#define LPA_10HALF            0x0020  /* Can do 10mbps half-duplex     */
#define LPA_1000XFULL         0x0020  /* Can do 1000BASE-X full-duplex */
#define LPA_10FULL            0x0040  /* Can do 10mbps full-duplex     */
#define LPA_1000XHALF         0x0040  /* Can do 1000BASE-X half-duplex */
#define LPA_100HALF           0x0080  /* Can do 100mbps half-duplex    */
#define LPA_1000XPAUSE        0x0080  /* Can do 1000BASE-X pause       */
#define LPA_100FULL           0x0100  /* Can do 100mbps full-duplex    */
#define LPA_1000XPAUSE_ASYM   0x0100  /* Can do 1000BASE-X pause asym  */
#define LPA_100BASE4          0x0200  /* Can do 100mbps 4k packets     */
#define LPA_PAUSE_CAP         0x0400  /* Can pause                     */
#define LPA_PAUSE_ASYM        0x0800  /* Can pause asymetrically       */
#define LPA_RESV              0x1000  /* Unused...                     */
#define LPA_RFAULT            0x2000  /* Link partner faulted          */
#define LPA_LPACK             0x4000  /* Link partner acked us         */
#define LPA_NPAGE             0x8000  /* Next page bit                 */

/* 1000BASE-T Control register(0x09) */
#define ADVERTISE_1000FULL    0x0200  /* Advertise 1000BASE-T full duplex */
#define ADVERTISE_1000HALF    0x0100  /* Advertise 1000BASE-T half duplex */
#define CTL1000_AS_MASTER     0x0800
#define CTL1000_ENABLE_MASTER 0x1000

/* 1000BASE-T Status register(0x0A) */
#define LPA_1000LOCALRXOK     0x2000  /* Link partner local receiver status  */
#define LPA_1000REMRXOK       0x1000  /* Link partner remote receiver status */
#define LPA_1000FULL          0x0800  /* Link partner 1000BASE-T full duplex */
#define LPA_1000HALF          0x0400  /* Link partner 1000BASE-T half duplex */

/**********YT8614************************************************/
/* Basic mode control register(0x00) */
#define FIBER_BMCR_RESV        0x001f  /* b[4:0] Unused...                      */
#define FIBER_BMCR_EN_UNIDIR   0x0020  /* b[5]   Valid when bit 0.12 is zero and bit 0.8 is one */
#define FIBER_BMCR_SPEED1000   0x0040  /* b[6]   MSB of Speed (1000)            */
#define FIBER_BMCR_CTST        0x0080  /* b[7]   Collision test                 */
#define FIBER_BMCR_DUPLEX_MODE 0x0100  /* b[8]   Duplex mode                    */
#define FIBER_BMCR_ANRESTART   0x0200  /* b[9]   Auto negotiation restart       */
#define FIBER_BMCR_ISOLATE     0x0400  /* b[10]  Isolate phy from RGMII/SGMII/FIBER */
#define FIBER_BMCR_PDOWN       0x0800  /* b[11]  1: Power down                  */
#define FIBER_BMCR_ANENABLE    0x1000  /* b[12]  Enable auto negotiation        */
#define FIBER_BMCR_SPEED100    0x2000  /* b[13]  LSB of Speed (100)             */
#define FIBER_BMCR_LOOPBACK    0x4000  /* b[14]  Internal loopback control      */
#define FIBER_BMCR_RESET       0x8000  /* b[15]  PHY Software Reset(self-clear) */

/* Sds specific status register(0x11) */
#define FIBER_SSR_ERCAP          0x0001  /* b[0]     realtime syncstatus */
#define FIBER_SSR_XMIT           0x000E  /* b[3:1]   realtime transmit statemachine.
                                                     001: Xmit Idle;
                                                     010: Xmit Config; 
                                                     100: Xmit Data. */
#define FIBER_SSR_SER_MODE_CFG   0x0030  /* b[5:4]   realtime serdes working mode.
                                                     00: SG_MAC;
                                                     01: SG_PHY;
                                                     10: FIB_1000;
                                                     11: FIB_100. */
#define FIBER_SSR_EN_FLOWCTRL_TX 0x0040  /* b[6]     realtime en_flowctrl_tx */
#define FIBER_SSR_EN_FLOWCTRL_RX 0x0080  /* b[7]     realtime en_flowctrl_rx */
#define FIBER_SSR_DUPLEX_ERROR   0x0100  /* b[8]     realtime deplex error */
#define FIBER_SSR_RX_LPI_ACTIVE  0x0200  /* b[9]     rx lpi is active */
#define FIBER_SSR_LSTATUS        0x0400  /* b[10]    Link status real-time */
#define FIBER_SSR_PAUSE          0x1800  /* b[12:11] Pause to mac */
#define FIBER_SSR_DUPLEX         0x2000  /* b[13]    This status bit is valid only when bit10 is 1.
                                                     1: full duplex 
                                                     0: half duplex */
#define FIBER_SSR_SPEED_MODE     0xC000  /* b[15:14] These status bits are valid only when bit10 is 1.
                                                     10---1000M 
                                                     01---100M */

/* SLED cfg0 (ext 0xA001) */
#define FIBER_SLED_CFG0_EN_CTRL  0x00FF  /* b[7:0]   Control to enable the eight ports' SLED */
#define FIBER_SLED_CFG0_BIT_MASK 0x0700  /* b[10:8]  1: enable the pin output */
#define FIBER_SLED_CFG0_ACT_LOW  0x0800  /* b[11]    control SLED's polarity. 1: active low; 0: active high */
#define FIBER_SLED_CFG0_MANU_ST  0x7000  /* b[14:12] SLEDs' manul status, corresponding to each port's 3 SLEDs */
#define FIBER_SLED_CFG0_MANU_EN  0x8000  /* b[15]    to control serial LEDs status manually */

/**********YT8614************************************************/
/* Fiber auto sensing(sgmii ext 0xA5) */
#define FIBER_AUTO_SEN_ENABLE    0x8000  /* b[15]  Enable fiber auto sensing */

/* Fiber force speed(common ext 0xA009) */
#define FIBER_FORCE_1000M        0x0001  /* b[0]  1:1000BX 0:100FX */

#ifndef NULL
#define NULL 0
#endif

/* errno */
enum ytphy_8614_errno_e
{
	SYS_E_NONE,
	SYS_E_PARAM,
	SYS_E_MAX
};

/* errno */
enum ytphy_8614_combo_speed_e
{
	YT8614_COMBO_FIBER_1000M,
	YT8614_COMBO_FIBER_100M,
	YT8614_COMBO_UTP_ONLY,
	YT8614_COMBO_SPEED_MAX
};

/* definition for porting */
/* phy registers access */
typedef struct
{
    u16 reg;     /* the offset of the phy internal address */
    u16 val;     /* the value of the register */
    u8  regType; /* register type */
} phy_data_s;

/* for porting use.
 * pls over-write member function read/write for mdio access
 */
typedef struct phy_info_str
{
#if 0
    struct phy_device *phydev;
	int mdio_base;
#endif
	unsigned int lport;
	unsigned int bus_id;
	unsigned int phy_addr;

    s32 (*read)(struct phy_info_str *info, phy_data_s *param);
    s32 (*write)(struct phy_info_str *info, phy_data_s *param);
}phy_info_s;

/* get phy access method */
s32 yt8614_read_reg(struct phy_info_str *info, phy_data_s *param);
s32 yt8614_write_reg(struct phy_info_str *info, phy_data_s *param);
s32 yt8614_phy_soft_reset(u32 lport);
s32 yt8614_phy_init(u32 lport);
s32 yt8614_fiber_enable(u32 lport, BOOL enable);
s32 yt8614_utp_enable(u32 lport, BOOL enable);
s32 yt8614_fiber_unidirection_set(u32 lport, int speed, BOOL enable);
s32 yt8614_fiber_autosensing_set(u32 lport, BOOL enable);
s32 yt8614_fiber_speed_set(u32 lport, int fiber_speed);
s32 yt8614_qsgmii_autoneg_set(u32 lport, BOOL enable);
s32 yt8614_sgmii_autoneg_set(u32 lport, BOOL enable);
s32 yt8614_qsgmii_sgmii_link_status_get(u32 lport, BOOL *enable, BOOL if_qsgmii);
int yt8614_combo_media_priority_set (u32 lport, int fiber);
int yt8614_combo_media_priority_get (u32 lport, int *fiber);
s32 yt8614_utp_autoneg_set(u32 lport, BOOL enable);
s32 yt8614_utp_autoneg_get(u32 lport, BOOL *enable);
s32 yt8614_utp_autoneg_ability_set(u32 lport, unsigned int cap_mask);
s32 yt8614_utp_autoneg_ability_get(u32 lport, unsigned int *cap_mask);
s32 yt8614_utp_force_duplex_set(u32 lport, BOOL full);
s32 yt8614_utp_force_duplex_get(u32 lport, BOOL *full);
s32 yt8614_utp_force_speed_set(u32 lport, unsigned int speed);
s32 yt8614_utp_force_speed_get(u32 lport, unsigned int *speed);
int yt8614_autoneg_done_get (u32 lport, int speed, int *aneg);
int yt8614_media_status_get(u32 lport, int* speed, int* duplex, int* ret_link, int *media);

#endif
