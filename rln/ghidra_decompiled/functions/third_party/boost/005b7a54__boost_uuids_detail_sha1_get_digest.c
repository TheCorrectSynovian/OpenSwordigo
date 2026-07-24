/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7a54
 * Function: boost::uuids::detail::sha1::get_digest
 * Signature: undefined __thiscall get_digest(sha1 * this, unsigned_int * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::uuids::detail::sha1::get_digest(unsigned int (&) [5]) */

void __thiscall boost::uuids::detail::sha1::get_digest(sha1 *this,unsigned_int *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(this + 0x58);
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = (sha1)0x80;
  uVar2 = *(ulong *)(this + 0x58);
  if (uVar2 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    uVar2 = *(ulong *)(this + 0x58);
  }
  uVar3 = uVar2;
  if (uVar2 < 0x39) {
    if (uVar2 != 0x38) {
      do {
                    /* try { // try from 005b7b18 to 006b7b1b has its CatchHandler @ 005b7c68 */
                    /* try { // try from 005b7b1c to 006b7c8b has its CatchHandler @ 005b7610 */
        *(ulong *)(this + 0x58) = uVar2 + 1;
        this[uVar2 + 0x14] = (sha1)0x0;
        uVar2 = *(ulong *)(this + 0x58);
        if (uVar2 == 0x40) {
          *(undefined8 *)(this + 0x58) = 0;
          process_block(this);
          uVar2 = *(ulong *)(this + 0x58);
        }
      } while (uVar2 < 0x38);
    }
  }
  else {
    do {
      *(ulong *)(this + 0x58) = uVar3 + 1;
      this[uVar3 + 0x14] = (sha1)0x0;
      uVar3 = *(ulong *)(this + 0x58);
      if (uVar3 == 0x40) {
        *(undefined8 *)(this + 0x58) = 0;
        process_block(this);
        uVar3 = *(ulong *)(this + 0x58);
      }
      uVar2 = 0;
    } while (uVar3 != 0);
    do {
      *(ulong *)(this + 0x58) = uVar2 + 1;
      this[uVar2 + 0x14] = (sha1)0x0;
      uVar2 = *(ulong *)(this + 0x58);
      if (uVar2 == 0x40) {
        *(undefined8 *)(this + 0x58) = 0;
        process_block(this);
        uVar2 = *(ulong *)(this + 0x58);
      }
    } while (uVar2 < 0x38);
  }
  *(ulong *)(this + 0x58) = uVar2 + 1;
  this[uVar2 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x68) >> 0x18,0);
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x68) >> 0x10,0);
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x68) >> 8,0);
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
                    /* catch() { ... } // from try @ 005b77dc with catch @ 005b7be8 */
                    /* catch() { ... } // from try @ 005b7660 with catch @ 005b7bec */
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81(*(undefined8 *)(this + 0x68),0);
                    /* catch() { ... } // from try @ 005b78fc with catch @ 005b7bf8 */
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x60) >> 0x18,0);
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x60) >> 0x10,0);
  lVar1 = *(long *)(this + 0x58);
                    /* catch() { ... } // from try @ 005b7b18 with catch @ 005b7c68 */
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
                    /* catch() { ... } // from try @ 005b7784 with catch @ 005b7c74 */
    process_block(this);
                    /* catch() { ... } // from try @ 005b76e0 with catch @ 005b7c78 */
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
                    /* try { // try from 005b7c8c to 006b7ceb has its CatchHandler @ 005b7c8c
                       catch() { ... } // from try @ 005b7c8c with catch @ 005b7c8c
                       catch() { ... } // from try @ 005b7cf0 with catch @ 005b7c8c
                       catch() { ... } // from try @ 005b7d74 with catch @ 005b7c8c
                       catch() { ... } // from try @ 005b7e54 with catch @ 005b7c8c */
  this[lVar1 + 0x14] = SUB81((ulong)*(undefined8 *)(this + 0x60) >> 8,0);
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
    lVar1 = *(long *)(this + 0x58);
  }
  *(long *)(this + 0x58) = lVar1 + 1;
  this[lVar1 + 0x14] = SUB81(*(undefined8 *)(this + 0x60),0);
  if (*(long *)(this + 0x58) == 0x40) {
    *(undefined8 *)(this + 0x58) = 0;
    process_block(this);
  }
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
                    /* try { // try from 005b7cec to 006b7cef has its CatchHandler @ 005b7df4 */
                    /* try { // try from 005b7cf0 to 006b7cff has its CatchHandler @ 005b7c8c */
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
                    /* try { // try from 005b7d00 to 006b7d73 has its CatchHandler @ 005b7e08 */
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  return;
}


