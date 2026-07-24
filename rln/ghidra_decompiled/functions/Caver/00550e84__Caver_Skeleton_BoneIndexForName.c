/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550e84
 * Function: Caver::Skeleton::BoneIndexForName
 * Signature: undefined __thiscall BoneIndexForName(Skeleton * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Skeleton::BoneIndexForName(std::string const&) const */

ulong __thiscall Caver::Skeleton::BoneIndexForName(Skeleton *this,string *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *__s1;
  size_t __n;
  undefined8 *puVar4;
  
                    /* try { // try from 00550e84 to 00650e8b has its CatchHandler @ 00550ea8 */
                    /* try { // try from 00550e8c to 00650ebb has its CatchHandler @ 00550e70 */
  iVar1 = *(int *)this;
  if (0 < iVar1) {
    __s1 = *(void **)param_1;
                    /* catch() { ... } // from try @ 00550e84 with catch @ 00550ea8 */
    puVar4 = *(undefined8 **)(this + 8);
    uVar3 = 0;
    __n = *(size_t *)((long)__s1 + -0x18);
    do {
                    /* catch() { ... } // from try @ 00550fd8 with catch @ 00550ec4
                       catch() { ... } // from try @ 00551154 with catch @ 00550ec4 */
      if ((__n == *(size_t *)((long)*puVar4 + -0x18)) &&
         (iVar2 = memcmp(__s1,(void *)*puVar4,__n), iVar2 == 0)) goto LAB_00550ee8;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x12;
    } while ((long)uVar3 < (long)iVar1);
  }
  uVar3 = 0xffffffff;
LAB_00550ee8:
                    /* try { // try from 00550ef8 to 00650f1f has its CatchHandler @ 00551070 */
  return uVar3 & 0xffffffff;
}


