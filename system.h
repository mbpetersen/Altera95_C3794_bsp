/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_0' in SOPC Builder design 'tse10G'
 * SOPC Builder design path: tse10G.sopcinfo
 *
 * Generated: Thu Aug 17 09:50:23 CDT 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x820
#define ALT_CPU_CPU_FREQ 83333336u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "small"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1b
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x80020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 83333336
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 1
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x14
#define ALT_CPU_NAME "nios2_0"
#define ALT_CPU_RESET_ADDR 0x0


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x820
#define NIOS2_CPU_FREQ 83333336u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_DATA_ADDR_WIDTH 0x1b
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x80020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 1
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x14
#define NIOS2_RESET_ADDR 0x0


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_EPCS_FLASH_CONTROLLER
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SC_FIFO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_ETH_10G_DESIGN_EXAMPLE
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL
#define __AVALON_ST_GEN
#define __CLKCTRL
#define __CLK_MUXER
#define __GUISYS_AVALON_ST_SPLITTER
#define __I2C_CONTROLLER
#define __MULTI_COMPARE_MAIN
#define __SNIFFER
#define __SNIFFER64
#define __ST_MUX10G_2_TO_1_ERROR6
#define __ST_MUX10G_3_TO_1
#define __ST_MUX_3_TO_1
#define __TOP_C37DOT94
#define __TRIPLE_SPEED_ETHERNET
#define __TSE_ADDR_SWAPPER
#define __TSE_ADDR_SWAPPER64


/*
 * IRQ_aggregator configuration
 *
 */

#define ALT_MODULE_CLASS_IRQ_aggregator altera_avalon_pio
#define IRQ_AGGREGATOR_BASE 0x1bc0
#define IRQ_AGGREGATOR_BIT_CLEARING_EDGE_REGISTER 0
#define IRQ_AGGREGATOR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IRQ_AGGREGATOR_CAPTURE 0
#define IRQ_AGGREGATOR_DATA_WIDTH 8
#define IRQ_AGGREGATOR_DO_TEST_BENCH_WIRING 0
#define IRQ_AGGREGATOR_DRIVEN_SIM_VALUE 0x0
#define IRQ_AGGREGATOR_EDGE_TYPE "NONE"
#define IRQ_AGGREGATOR_FREQ 83333336u
#define IRQ_AGGREGATOR_HAS_IN 1
#define IRQ_AGGREGATOR_HAS_OUT 0
#define IRQ_AGGREGATOR_HAS_TRI 0
#define IRQ_AGGREGATOR_IRQ 7
#define IRQ_AGGREGATOR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define IRQ_AGGREGATOR_IRQ_TYPE "LEVEL"
#define IRQ_AGGREGATOR_NAME "/dev/IRQ_aggregator"
#define IRQ_AGGREGATOR_RESET_VALUE 0x0
#define IRQ_AGGREGATOR_SPAN 16
#define IRQ_AGGREGATOR_TYPE "altera_avalon_pio"


/*
 * IRQ_mask configuration
 *
 */

#define ALT_MODULE_CLASS_IRQ_mask altera_avalon_pio
#define IRQ_MASK_BASE 0x1bb0
#define IRQ_MASK_BIT_CLEARING_EDGE_REGISTER 0
#define IRQ_MASK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define IRQ_MASK_CAPTURE 0
#define IRQ_MASK_DATA_WIDTH 8
#define IRQ_MASK_DO_TEST_BENCH_WIRING 0
#define IRQ_MASK_DRIVEN_SIM_VALUE 0x0
#define IRQ_MASK_EDGE_TYPE "NONE"
#define IRQ_MASK_FREQ 83333336u
#define IRQ_MASK_HAS_IN 0
#define IRQ_MASK_HAS_OUT 1
#define IRQ_MASK_HAS_TRI 0
#define IRQ_MASK_IRQ -1
#define IRQ_MASK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define IRQ_MASK_IRQ_TYPE "NONE"
#define IRQ_MASK_NAME "/dev/IRQ_mask"
#define IRQ_MASK_RESET_VALUE 0x0
#define IRQ_MASK_SPAN 16
#define IRQ_MASK_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Arria II GX"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x1900
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x1900
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x1900
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "tse10G"


/*
 * altpll_0 configuration
 *
 */

#define ALTPLL_0_BASE 0x1820
#define ALTPLL_0_IRQ -1
#define ALTPLL_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ALTPLL_0_NAME "/dev/altpll_0"
#define ALTPLL_0_SPAN 16
#define ALTPLL_0_TYPE "altpll"
#define ALT_MODULE_CLASS_altpll_0 altpll


/*
 * clk_muxer_10GE_loop configuration
 *
 */

#define ALT_MODULE_CLASS_clk_muxer_10GE_loop clk_muxer
#define CLK_MUXER_10GE_LOOP_BASE 0x1ba0
#define CLK_MUXER_10GE_LOOP_IRQ -1
#define CLK_MUXER_10GE_LOOP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLK_MUXER_10GE_LOOP_NAME "/dev/clk_muxer_10GE_loop"
#define CLK_MUXER_10GE_LOOP_SPAN 2
#define CLK_MUXER_10GE_LOOP_TYPE "clk_muxer"


/*
 * clk_muxer_egress configuration
 *
 */

#define ALT_MODULE_CLASS_clk_muxer_egress clk_muxer
#define CLK_MUXER_EGRESS_BASE 0x1b80
#define CLK_MUXER_EGRESS_IRQ -1
#define CLK_MUXER_EGRESS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLK_MUXER_EGRESS_NAME "/dev/clk_muxer_egress"
#define CLK_MUXER_EGRESS_SPAN 2
#define CLK_MUXER_EGRESS_TYPE "clk_muxer"


/*
 * clk_muxer_ingress configuration
 *
 */

#define ALT_MODULE_CLASS_clk_muxer_ingress clk_muxer
#define CLK_MUXER_INGRESS_BASE 0x1b90
#define CLK_MUXER_INGRESS_IRQ -1
#define CLK_MUXER_INGRESS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLK_MUXER_INGRESS_NAME "/dev/clk_muxer_ingress"
#define CLK_MUXER_INGRESS_SPAN 2
#define CLK_MUXER_INGRESS_TYPE "clk_muxer"


/*
 * clkctrl_0 configuration
 *
 */

#define ALT_MODULE_CLASS_clkctrl_0 clkctrl
#define CLKCTRL_0_BASE 0x184000
#define CLKCTRL_0_IRQ -1
#define CLKCTRL_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLKCTRL_0_NAME "/dev/clkctrl_0"
#define CLKCTRL_0_SPAN 4096
#define CLKCTRL_0_TYPE "clkctrl"


/*
 * epcs_flash_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_epcs_flash_controller_0 altera_avalon_epcs_flash_controller
#define EPCS_FLASH_CONTROLLER_0_BASE 0x0
#define EPCS_FLASH_CONTROLLER_0_IRQ 5
#define EPCS_FLASH_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EPCS_FLASH_CONTROLLER_0_NAME "/dev/epcs_flash_controller_0"
#define EPCS_FLASH_CONTROLLER_0_REGISTER_OFFSET 1024
#define EPCS_FLASH_CONTROLLER_0_SPAN 2048
#define EPCS_FLASH_CONTROLLER_0_TYPE "altera_avalon_epcs_flash_controller"


/*
 * eth_10g_design_example_0 configuration
 *
 */

#define ALT_MODULE_CLASS_eth_10g_design_example_0 altera_eth_10g_design_example
#define ETH_10G_DESIGN_EXAMPLE_0_BASE 0x100000
#define ETH_10G_DESIGN_EXAMPLE_0_IRQ -1
#define ETH_10G_DESIGN_EXAMPLE_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ETH_10G_DESIGN_EXAMPLE_0_NAME "/dev/eth_10g_design_example_0"
#define ETH_10G_DESIGN_EXAMPLE_0_SPAN 524288
#define ETH_10G_DESIGN_EXAMPLE_0_TYPE "altera_eth_10g_design_example"


/*
 * gen configuration
 *
 */

#define ALT_MODULE_CLASS_gen avalon_st_gen
#define GEN_BASE 0x4000000
#define GEN_IRQ -1
#define GEN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GEN_NAME "/dev/gen"
#define GEN_SPAN 1024
#define GEN_TYPE "avalon_st_gen"


/*
 * guisys_avalon_st_splitter_0 configuration
 *
 */

#define ALT_MODULE_CLASS_guisys_avalon_st_splitter_0 guisys_avalon_st_splitter
#define GUISYS_AVALON_ST_SPLITTER_0_BASE 0x3400
#define GUISYS_AVALON_ST_SPLITTER_0_IRQ -1
#define GUISYS_AVALON_ST_SPLITTER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GUISYS_AVALON_ST_SPLITTER_0_NAME "/dev/guisys_avalon_st_splitter_0"
#define GUISYS_AVALON_ST_SPLITTER_0_SPAN 1024
#define GUISYS_AVALON_ST_SPLITTER_0_TYPE "guisys_avalon_st_splitter"


/*
 * guisys_avalon_st_splitter_1 configuration
 *
 */

#define ALT_MODULE_CLASS_guisys_avalon_st_splitter_1 guisys_avalon_st_splitter
#define GUISYS_AVALON_ST_SPLITTER_1_BASE 0x3800
#define GUISYS_AVALON_ST_SPLITTER_1_IRQ -1
#define GUISYS_AVALON_ST_SPLITTER_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GUISYS_AVALON_ST_SPLITTER_1_NAME "/dev/guisys_avalon_st_splitter_1"
#define GUISYS_AVALON_ST_SPLITTER_1_SPAN 1024
#define GUISYS_AVALON_ST_SPLITTER_1_TYPE "guisys_avalon_st_splitter"


/*
 * guisys_avalon_st_splitter_2 configuration
 *
 */

#define ALT_MODULE_CLASS_guisys_avalon_st_splitter_2 guisys_avalon_st_splitter
#define GUISYS_AVALON_ST_SPLITTER_2_BASE 0x3c00
#define GUISYS_AVALON_ST_SPLITTER_2_IRQ -1
#define GUISYS_AVALON_ST_SPLITTER_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GUISYS_AVALON_ST_SPLITTER_2_NAME "/dev/guisys_avalon_st_splitter_2"
#define GUISYS_AVALON_ST_SPLITTER_2_SPAN 1024
#define GUISYS_AVALON_ST_SPLITTER_2_TYPE "guisys_avalon_st_splitter"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * i2c_controller_0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_controller_0 i2c_controller
#define I2C_CONTROLLER_0_BASE 0x1b20
#define I2C_CONTROLLER_0_IRQ -1
#define I2C_CONTROLLER_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define I2C_CONTROLLER_0_NAME "/dev/i2c_controller_0"
#define I2C_CONTROLLER_0_SPAN 2
#define I2C_CONTROLLER_0_TYPE "i2c_controller"


/*
 * i2c_controller_c3794 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c_controller_c3794 i2c_controller
#define I2C_CONTROLLER_C3794_BASE 0x1bd0
#define I2C_CONTROLLER_C3794_IRQ -1
#define I2C_CONTROLLER_C3794_IRQ_INTERRUPT_CONTROLLER_ID -1
#define I2C_CONTROLLER_C3794_NAME "/dev/i2c_controller_c3794"
#define I2C_CONTROLLER_C3794_SPAN 2
#define I2C_CONTROLLER_C3794_TYPE "i2c_controller"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x1900
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * mon configuration
 *
 */

#define ALT_MODULE_CLASS_mon multi_compare_main
#define MON_BASE 0x4040000
#define MON_IRQ -1
#define MON_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MON_NAME "/dev/mon"
#define MON_SPAN 262144
#define MON_TYPE "multi_compare_main"


/*
 * mux31_st_10GE configuration
 *
 */

#define ALT_MODULE_CLASS_mux31_st_10GE st_mux10G_3_to_1
#define MUX31_ST_10GE_BASE 0x3000
#define MUX31_ST_10GE_IRQ -1
#define MUX31_ST_10GE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MUX31_ST_10GE_NAME "/dev/mux31_st_10GE"
#define MUX31_ST_10GE_SPAN 1024
#define MUX31_ST_10GE_TYPE "st_mux10G_3_to_1"


/*
 * mux31_st_1GE_A configuration
 *
 */

#define ALT_MODULE_CLASS_mux31_st_1GE_A st_mux_3_to_1
#define MUX31_ST_1GE_A_BASE 0x1400
#define MUX31_ST_1GE_A_IRQ -1
#define MUX31_ST_1GE_A_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MUX31_ST_1GE_A_NAME "/dev/mux31_st_1GE_A"
#define MUX31_ST_1GE_A_SPAN 1024
#define MUX31_ST_1GE_A_TYPE "st_mux_3_to_1"


/*
 * mux31_st_1GE_B configuration
 *
 */

#define ALT_MODULE_CLASS_mux31_st_1GE_B st_mux_3_to_1
#define MUX31_ST_1GE_B_BASE 0x2000
#define MUX31_ST_1GE_B_IRQ -1
#define MUX31_ST_1GE_B_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MUX31_ST_1GE_B_NAME "/dev/mux31_st_1GE_B"
#define MUX31_ST_1GE_B_SPAN 1024
#define MUX31_ST_1GE_B_TYPE "st_mux_3_to_1"


/*
 * onchip_mem configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_mem altera_avalon_onchip_memory2
#define ONCHIP_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEM_BASE 0x80000
#define ONCHIP_MEM_CONTENTS_INFO ""
#define ONCHIP_MEM_DUAL_PORT 0
#define ONCHIP_MEM_GUI_RAM_BLOCK_TYPE "Automatic"
#define ONCHIP_MEM_INIT_CONTENTS_FILE "onchip_mem"
#define ONCHIP_MEM_INIT_MEM_CONTENT 1
#define ONCHIP_MEM_INSTANCE_ID "NONE"
#define ONCHIP_MEM_IRQ -1
#define ONCHIP_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEM_NAME "/dev/onchip_mem"
#define ONCHIP_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEM_RAM_BLOCK_TYPE "Auto"
#define ONCHIP_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEM_SINGLE_CLOCK_OP 0
#define ONCHIP_MEM_SIZE_MULTIPLE 1
#define ONCHIP_MEM_SIZE_VALUE 303104u
#define ONCHIP_MEM_SPAN 303104
#define ONCHIP_MEM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEM_WRITABLE 1


/*
 * pio_1 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_1 altera_avalon_pio
#define PIO_1_BASE 0x1b30
#define PIO_1_BIT_CLEARING_EDGE_REGISTER 1
#define PIO_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_1_CAPTURE 1
#define PIO_1_DATA_WIDTH 6
#define PIO_1_DO_TEST_BENCH_WIRING 0
#define PIO_1_DRIVEN_SIM_VALUE 0x0
#define PIO_1_EDGE_TYPE "ANY"
#define PIO_1_FREQ 83333336u
#define PIO_1_HAS_IN 1
#define PIO_1_HAS_OUT 0
#define PIO_1_HAS_TRI 0
#define PIO_1_IRQ 4
#define PIO_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PIO_1_IRQ_TYPE "EDGE"
#define PIO_1_NAME "/dev/pio_1"
#define PIO_1_RESET_VALUE 0x0
#define PIO_1_SPAN 16
#define PIO_1_TYPE "altera_avalon_pio"


/*
 * pio_2 configuration
 *
 */

#define ALT_MODULE_CLASS_pio_2 altera_avalon_pio
#define PIO_2_BASE 0x1b40
#define PIO_2_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_2_BIT_MODIFYING_OUTPUT_REGISTER 1
#define PIO_2_CAPTURE 0
#define PIO_2_DATA_WIDTH 16
#define PIO_2_DO_TEST_BENCH_WIRING 0
#define PIO_2_DRIVEN_SIM_VALUE 0x0
#define PIO_2_EDGE_TYPE "NONE"
#define PIO_2_FREQ 83333336u
#define PIO_2_HAS_IN 0
#define PIO_2_HAS_OUT 1
#define PIO_2_HAS_TRI 0
#define PIO_2_IRQ -1
#define PIO_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_2_IRQ_TYPE "NONE"
#define PIO_2_NAME "/dev/pio_2"
#define PIO_2_RESET_VALUE 0x0
#define PIO_2_SPAN 32
#define PIO_2_TYPE "altera_avalon_pio"


/*
 * pio_3IO configuration
 *
 */

#define ALT_MODULE_CLASS_pio_3IO altera_avalon_pio
#define PIO_3IO_BASE 0x1b60
#define PIO_3IO_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_3IO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_3IO_CAPTURE 0
#define PIO_3IO_DATA_WIDTH 8
#define PIO_3IO_DO_TEST_BENCH_WIRING 0
#define PIO_3IO_DRIVEN_SIM_VALUE 0x0
#define PIO_3IO_EDGE_TYPE "NONE"
#define PIO_3IO_FREQ 83333336u
#define PIO_3IO_HAS_IN 1
#define PIO_3IO_HAS_OUT 1
#define PIO_3IO_HAS_TRI 0
#define PIO_3IO_IRQ -1
#define PIO_3IO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_3IO_IRQ_TYPE "NONE"
#define PIO_3IO_NAME "/dev/pio_3IO"
#define PIO_3IO_RESET_VALUE 0x0
#define PIO_3IO_SPAN 16
#define PIO_3IO_TYPE "altera_avalon_pio"


/*
 * pio_3dir configuration
 *
 */

#define ALT_MODULE_CLASS_pio_3dir altera_avalon_pio
#define PIO_3DIR_BASE 0x1b70
#define PIO_3DIR_BIT_CLEARING_EDGE_REGISTER 0
#define PIO_3DIR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO_3DIR_CAPTURE 0
#define PIO_3DIR_DATA_WIDTH 8
#define PIO_3DIR_DO_TEST_BENCH_WIRING 0
#define PIO_3DIR_DRIVEN_SIM_VALUE 0x0
#define PIO_3DIR_EDGE_TYPE "NONE"
#define PIO_3DIR_FREQ 83333336u
#define PIO_3DIR_HAS_IN 0
#define PIO_3DIR_HAS_OUT 1
#define PIO_3DIR_HAS_TRI 0
#define PIO_3DIR_IRQ -1
#define PIO_3DIR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO_3DIR_IRQ_TYPE "NONE"
#define PIO_3DIR_NAME "/dev/pio_3dir"
#define PIO_3DIR_RESET_VALUE 0x0
#define PIO_3DIR_SPAN 16
#define PIO_3DIR_TYPE "altera_avalon_pio"


/*
 * sc_fifo_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sc_fifo_0 altera_avalon_sc_fifo
#define SC_FIFO_0_BASE 0x4800
#define SC_FIFO_0_IRQ -1
#define SC_FIFO_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SC_FIFO_0_NAME "/dev/sc_fifo_0"
#define SC_FIFO_0_SPAN 32
#define SC_FIFO_0_TYPE "altera_avalon_sc_fifo"


/*
 * sniffer64_10GE configuration
 *
 */

#define ALT_MODULE_CLASS_sniffer64_10GE sniffer64
#define SNIFFER64_10GE_BASE 0x183000
#define SNIFFER64_10GE_IRQ -1
#define SNIFFER64_10GE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SNIFFER64_10GE_NAME "/dev/sniffer64_10GE"
#define SNIFFER64_10GE_SPAN 4096
#define SNIFFER64_10GE_TYPE "sniffer64"


/*
 * sniffer_TSE_A configuration
 *
 */

#define ALT_MODULE_CLASS_sniffer_TSE_A sniffer
#define SNIFFER_TSE_A_BASE 0x181000
#define SNIFFER_TSE_A_IRQ -1
#define SNIFFER_TSE_A_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SNIFFER_TSE_A_NAME "/dev/sniffer_TSE_A"
#define SNIFFER_TSE_A_SPAN 4096
#define SNIFFER_TSE_A_TYPE "sniffer"


/*
 * sniffer_TSE_B configuration
 *
 */

#define ALT_MODULE_CLASS_sniffer_TSE_B sniffer
#define SNIFFER_TSE_B_BASE 0x182000
#define SNIFFER_TSE_B_IRQ -1
#define SNIFFER_TSE_B_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SNIFFER_TSE_B_NAME "/dev/sniffer_TSE_B"
#define SNIFFER_TSE_B_SPAN 4096
#define SNIFFER_TSE_B_TYPE "sniffer"


/*
 * split12_st_GEN configuration
 *
 */

#define ALT_MODULE_CLASS_split12_st_GEN guisys_avalon_st_splitter
#define SPLIT12_ST_GEN_BASE 0x4400
#define SPLIT12_ST_GEN_IRQ -1
#define SPLIT12_ST_GEN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SPLIT12_ST_GEN_NAME "/dev/split12_st_GEN"
#define SPLIT12_ST_GEN_SPAN 1024
#define SPLIT12_ST_GEN_TYPE "guisys_avalon_st_splitter"


/*
 * st_mux10G_2_to_1_error6_0 configuration
 *
 */

#define ALT_MODULE_CLASS_st_mux10G_2_to_1_error6_0 st_mux10G_2_to_1_error6
#define ST_MUX10G_2_TO_1_ERROR6_0_BASE 0x4000
#define ST_MUX10G_2_TO_1_ERROR6_0_IRQ -1
#define ST_MUX10G_2_TO_1_ERROR6_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ST_MUX10G_2_TO_1_ERROR6_0_NAME "/dev/st_mux10G_2_to_1_error6_0"
#define ST_MUX10G_2_TO_1_ERROR6_0_SPAN 1024
#define ST_MUX10G_2_TO_1_ERROR6_0_TYPE "st_mux10G_2_to_1_error6"


/*
 * swapper64_10G configuration
 *
 */

#define ALT_MODULE_CLASS_swapper64_10G tse_addr_swapper64
#define SWAPPER64_10G_BASE 0x180800
#define SWAPPER64_10G_IRQ -1
#define SWAPPER64_10G_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWAPPER64_10G_NAME "/dev/swapper64_10G"
#define SWAPPER64_10G_SPAN 64
#define SWAPPER64_10G_TYPE "tse_addr_swapper64"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x1830
#define SYSID_QSYS_0_ID 10102020
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1493747205
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x1ae0
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 83333336u
#define TIMER_IRQ 1
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 83332ull
#define TIMER_MULT 0.0010
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000u
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_BASE 0x1b00
#define TIMER_1_COUNTER_SIZE 32
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_FREQ 83333336u
#define TIMER_1_IRQ 2
#define TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_LOAD_VALUE 83332ull
#define TIMER_1_MULT 0.0010
#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "ms"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_SPAN 32
#define TIMER_1_TICKS_PER_SEC 1000u
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_TYPE "altera_avalon_timer"


/*
 * top_c37dot94_0 configuration
 *
 */

#define ALT_MODULE_CLASS_top_c37dot94_0 top_c37dot94
#define TOP_C37DOT94_0_BASE 0x1c00
#define TOP_C37DOT94_0_IRQ -1
#define TOP_C37DOT94_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TOP_C37DOT94_0_NAME "/dev/top_c37dot94_0"
#define TOP_C37DOT94_0_SPAN 1024
#define TOP_C37DOT94_0_TYPE "top_c37dot94"


/*
 * triple_speed_ethernet_0 configuration
 *
 */

#define ALT_MODULE_CLASS_triple_speed_ethernet_0 triple_speed_ethernet
#define TRIPLE_SPEED_ETHERNET_0_BASE 0x1000
#define TRIPLE_SPEED_ETHERNET_0_ENABLE_MACLITE 0
#define TRIPLE_SPEED_ETHERNET_0_FIFO_WIDTH 32
#define TRIPLE_SPEED_ETHERNET_0_IRQ -1
#define TRIPLE_SPEED_ETHERNET_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TRIPLE_SPEED_ETHERNET_0_IS_MULTICHANNEL_MAC 0
#define TRIPLE_SPEED_ETHERNET_0_MACLITE_GIGE 0
#define TRIPLE_SPEED_ETHERNET_0_MDIO_SHARED 0
#define TRIPLE_SPEED_ETHERNET_0_NAME "/dev/triple_speed_ethernet_0"
#define TRIPLE_SPEED_ETHERNET_0_NUMBER_OF_CHANNEL 1
#define TRIPLE_SPEED_ETHERNET_0_NUMBER_OF_MAC_MDIO_SHARED 1
#define TRIPLE_SPEED_ETHERNET_0_PCS 0
#define TRIPLE_SPEED_ETHERNET_0_PCS_ID 287454020u
#define TRIPLE_SPEED_ETHERNET_0_PCS_SGMII 0
#define TRIPLE_SPEED_ETHERNET_0_RECEIVE_FIFO_DEPTH 4096
#define TRIPLE_SPEED_ETHERNET_0_REGISTER_SHARED 0
#define TRIPLE_SPEED_ETHERNET_0_SPAN 1024
#define TRIPLE_SPEED_ETHERNET_0_TRANSMIT_FIFO_DEPTH 4096
#define TRIPLE_SPEED_ETHERNET_0_TYPE "triple_speed_ethernet"
#define TRIPLE_SPEED_ETHERNET_0_UNASSIGNED "unassigned"
#define TRIPLE_SPEED_ETHERNET_0_USE_MDIO 1


/*
 * triple_speed_ethernet_1 configuration
 *
 */

#define ALT_MODULE_CLASS_triple_speed_ethernet_1 triple_speed_ethernet
#define TRIPLE_SPEED_ETHERNET_1_BASE 0x2400
#define TRIPLE_SPEED_ETHERNET_1_ENABLE_MACLITE 0
#define TRIPLE_SPEED_ETHERNET_1_FIFO_WIDTH 32
#define TRIPLE_SPEED_ETHERNET_1_IRQ -1
#define TRIPLE_SPEED_ETHERNET_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TRIPLE_SPEED_ETHERNET_1_IS_MULTICHANNEL_MAC 0
#define TRIPLE_SPEED_ETHERNET_1_MACLITE_GIGE 0
#define TRIPLE_SPEED_ETHERNET_1_MDIO_SHARED 0
#define TRIPLE_SPEED_ETHERNET_1_NAME "/dev/triple_speed_ethernet_1"
#define TRIPLE_SPEED_ETHERNET_1_NUMBER_OF_CHANNEL 1
#define TRIPLE_SPEED_ETHERNET_1_NUMBER_OF_MAC_MDIO_SHARED 1
#define TRIPLE_SPEED_ETHERNET_1_PCS 0
#define TRIPLE_SPEED_ETHERNET_1_PCS_ID 0u
#define TRIPLE_SPEED_ETHERNET_1_PCS_SGMII 0
#define TRIPLE_SPEED_ETHERNET_1_RECEIVE_FIFO_DEPTH 4096
#define TRIPLE_SPEED_ETHERNET_1_REGISTER_SHARED 0
#define TRIPLE_SPEED_ETHERNET_1_SPAN 1024
#define TRIPLE_SPEED_ETHERNET_1_TRANSMIT_FIFO_DEPTH 4096
#define TRIPLE_SPEED_ETHERNET_1_TYPE "triple_speed_ethernet"
#define TRIPLE_SPEED_ETHERNET_1_UNASSIGNED "unassigned"
#define TRIPLE_SPEED_ETHERNET_1_USE_MDIO 1


/*
 * tse_addr_swapper_A configuration
 *
 */

#define ALT_MODULE_CLASS_tse_addr_swapper_A tse_addr_swapper
#define TSE_ADDR_SWAPPER_A_BASE 0x180000
#define TSE_ADDR_SWAPPER_A_IRQ -1
#define TSE_ADDR_SWAPPER_A_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TSE_ADDR_SWAPPER_A_NAME "/dev/tse_addr_swapper_A"
#define TSE_ADDR_SWAPPER_A_SPAN 1024
#define TSE_ADDR_SWAPPER_A_TYPE "tse_addr_swapper"


/*
 * tse_addr_swapper_B configuration
 *
 */

#define ALT_MODULE_CLASS_tse_addr_swapper_B tse_addr_swapper
#define TSE_ADDR_SWAPPER_B_BASE 0x180400
#define TSE_ADDR_SWAPPER_B_IRQ -1
#define TSE_ADDR_SWAPPER_B_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TSE_ADDR_SWAPPER_B_NAME "/dev/tse_addr_swapper_B"
#define TSE_ADDR_SWAPPER_B_SPAN 1024
#define TSE_ADDR_SWAPPER_B_TYPE "tse_addr_swapper"


/*
 * uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart
#define UART_0_BASE 0x1800
#define UART_0_BAUD 57600
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 83333336u
#define UART_0_IRQ 3
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_NAME "/dev/uart_0"
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SPAN 32
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0


/*
 * uart_usb configuration
 *
 */

#define ALT_MODULE_CLASS_uart_usb altera_avalon_uart
#define UART_USB_BASE 0x1940
#define UART_USB_BAUD 19200
#define UART_USB_DATA_BITS 8
#define UART_USB_FIXED_BAUD 1
#define UART_USB_FREQ 83333336u
#define UART_USB_IRQ 6
#define UART_USB_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_USB_NAME "/dev/uart_usb"
#define UART_USB_PARITY 'N'
#define UART_USB_SIM_CHAR_STREAM ""
#define UART_USB_SIM_TRUE_BAUD 0
#define UART_USB_SPAN 32
#define UART_USB_STOP_BITS 1
#define UART_USB_SYNC_REG_DEPTH 2
#define UART_USB_TYPE "altera_avalon_uart"
#define UART_USB_USE_CTS_RTS 0
#define UART_USB_USE_EOP_REGISTER 0


/*
 * ucosii configuration
 *
 */

#define OS_ARG_CHK_EN 1
#define OS_CPU_HOOKS_EN 1
#define OS_DEBUG_EN 1
#define OS_EVENT_NAME_SIZE 32
#define OS_FLAGS_NBITS 16
#define OS_FLAG_ACCEPT_EN 1
#define OS_FLAG_DEL_EN 1
#define OS_FLAG_EN 1
#define OS_FLAG_NAME_SIZE 32
#define OS_FLAG_QUERY_EN 1
#define OS_FLAG_WAIT_CLR_EN 1
#define OS_LOWEST_PRIO 20
#define OS_MAX_EVENTS 60
#define OS_MAX_FLAGS 20
#define OS_MAX_MEM_PART 60
#define OS_MAX_QS 20
#define OS_MAX_TASKS 10
#define OS_MBOX_ACCEPT_EN 1
#define OS_MBOX_DEL_EN 1
#define OS_MBOX_EN 1
#define OS_MBOX_POST_EN 1
#define OS_MBOX_POST_OPT_EN 1
#define OS_MBOX_QUERY_EN 1
#define OS_MEM_EN 1
#define OS_MEM_NAME_SIZE 32
#define OS_MEM_QUERY_EN 1
#define OS_MUTEX_ACCEPT_EN 1
#define OS_MUTEX_DEL_EN 1
#define OS_MUTEX_EN 1
#define OS_MUTEX_QUERY_EN 1
#define OS_Q_ACCEPT_EN 1
#define OS_Q_DEL_EN 1
#define OS_Q_EN 1
#define OS_Q_FLUSH_EN 1
#define OS_Q_POST_EN 1
#define OS_Q_POST_FRONT_EN 1
#define OS_Q_POST_OPT_EN 1
#define OS_Q_QUERY_EN 1
#define OS_SCHED_LOCK_EN 1
#define OS_SEM_ACCEPT_EN 1
#define OS_SEM_DEL_EN 1
#define OS_SEM_EN 1
#define OS_SEM_QUERY_EN 1
#define OS_SEM_SET_EN 1
#define OS_TASK_CHANGE_PRIO_EN 1
#define OS_TASK_CREATE_EN 1
#define OS_TASK_CREATE_EXT_EN 1
#define OS_TASK_DEL_EN 1
#define OS_TASK_IDLE_STK_SIZE 512
#define OS_TASK_NAME_SIZE 32
#define OS_TASK_PROFILE_EN 1
#define OS_TASK_QUERY_EN 1
#define OS_TASK_STAT_EN 1
#define OS_TASK_STAT_STK_CHK_EN 1
#define OS_TASK_STAT_STK_SIZE 512
#define OS_TASK_SUSPEND_EN 1
#define OS_TASK_SW_HOOK_EN 1
#define OS_TASK_TMR_PRIO 0
#define OS_TASK_TMR_STK_SIZE 512
#define OS_THREAD_SAFE_NEWLIB 1
#define OS_TICKS_PER_SEC TIMER_TICKS_PER_SEC
#define OS_TICK_STEP_EN 1
#define OS_TIME_DLY_HMSM_EN 1
#define OS_TIME_DLY_RESUME_EN 1
#define OS_TIME_GET_SET_EN 1
#define OS_TIME_TICK_HOOK_EN 1
#define OS_TMR_CFG_MAX 16
#define OS_TMR_CFG_NAME_SIZE 16
#define OS_TMR_CFG_TICKS_PER_SEC 10
#define OS_TMR_CFG_WHEEL_SIZE 2
#define OS_TMR_EN 0

#endif /* __SYSTEM_H_ */
