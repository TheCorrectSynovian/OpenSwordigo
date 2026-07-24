/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c264
 * Function: PVRTTextureTwiddle
 * Signature: undefined __cdecl PVRTTextureTwiddle(uint * param_1, uint param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureTwiddle(unsigned int&, unsigned int, unsigned int) */

void PVRTTextureTwiddle(uint *param_1,uint param_2,uint param_3)

{
                    /* catch() { ... } // from try @ 0061ba0c with catch @ 0061c268 */
                    /* catch() { ... } // from try @ 0061b998 with catch @ 0061c26c */
                    /* catch() { ... } // from try @ 0061b814 with catch @ 0061c270 */
                    /* catch() { ... } // from try @ 0061b800 with catch @ 0061c288 */
                    /* catch() { ... } // from try @ 0061b7b0 with catch @ 0061c28c */
                    /* catch() { ... } // from try @ 0061b78c with catch @ 0061c2bc */
                    /* catch() { ... } // from try @ 0061b784 with catch @ 0061c2c0 */
                    /* catch() { ... } // from try @ 0061b76c with catch @ 0061c2c4 */
                    /* catch() { ... } // from try @ 0061b79c with catch @ 0061c2d4
                       catch() { ... } // from try @ 0061b7e0 with catch @ 0061c2d4 */
                    /* catch() { ... } // from try @ 0061b82c with catch @ 0061c334
                       catch() { ... } // from try @ 0061b8d0 with catch @ 0061c334 */
                    /* catch() { ... } // from try @ 0061b808 with catch @ 0061c344
                       catch() { ... } // from try @ 0061b81c with catch @ 0061c344
                       catch() { ... } // from try @ 0061bb88 with catch @ 0061c344 */
                    /* catch() { ... } // from try @ 0061b760 with catch @ 0061c354
                       catch() { ... } // from try @ 0061b774 with catch @ 0061c354
                       catch() { ... } // from try @ 0061bbd0 with catch @ 0061c354 */
                    /* catch() { ... } // from try @ 0061b954 with catch @ 0061c35c
                       catch() { ... } // from try @ 0061b9a8 with catch @ 0061c35c
                       catch() { ... } // from try @ 0061bacc with catch @ 0061c35c */
  *param_1 = (param_2 & 0x8000) << 0x10 |
             (param_2 & 0x4000) << 0xf |
             (param_2 & 0x2000) << 0xe |
             (param_2 & 0x1000) << 0xd |
             (param_2 & 0x800) << 0xc |
             (param_2 & 0x400) << 0xb |
             (param_2 & 0x200) << 10 |
             (param_2 & 0x100) << 9 |
             (param_2 & 0x80) << 8 |
             (param_2 & 0x40) << 7 |
             (param_2 & 0x20) << 6 |
             (param_2 & 0x10) << 5 |
             (param_2 & 8) << 4 |
             (param_2 >> 2 & 1) << 5 |
             (param_2 >> 1 & 1) << 3 | param_3 & 1 | (param_2 & 1) << 1 | (param_3 >> 1 & 1) << 2 |
             (param_3 >> 2 & 1) << 4 | (param_3 & 8) << 3 | (param_3 & 0x10) << 4 |
             (param_3 & 0x20) << 5 | (param_3 & 0x40) << 6 | (param_3 & 0x80) << 7 |
             (param_3 & 0x100) << 8 | (param_3 & 0x200) << 9 | (param_3 & 0x400) << 10 |
             (param_3 & 0x800) << 0xb | (param_3 & 0x1000) << 0xc | (param_3 & 0x2000) << 0xd |
             (param_3 & 0x4000) << 0xe | (param_3 & 0x8000) << 0xf;
  return;
}


