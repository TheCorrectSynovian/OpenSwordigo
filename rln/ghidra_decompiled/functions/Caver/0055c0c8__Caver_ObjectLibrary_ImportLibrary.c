/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055c0c8
 * Function: Caver::ObjectLibrary::ImportLibrary
 * Signature: undefined __thiscall ImportLibrary(ObjectLibrary * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::ImportLibrary(boost::shared_ptr<Caver::ObjectLibrary> const&) */

void __thiscall Caver::ObjectLibrary::ImportLibrary(ObjectLibrary *this,shared_ptr *param_1)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *__s2;
  ulong __n_00;
  void *__s1;
  ulong uVar6;
  
                    /* catch() { ... } // from try @ 0055bb6c with catch @ 0055c0d0 */
  puVar5 = *(undefined8 **)(this + 0x38);
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != puVar5) {
    puVar2 = *(undefined8 **)param_1;
                    /* catch() { ... } // from try @ 0055bb58 with catch @ 0055c108 */
    __s2 = (void *)*puVar2;
                    /* catch() { ... } // from try @ 0055b8e4 with catch @ 0055c10c
                       catch() { ... } // from try @ 0055b91c with catch @ 0055c10c */
    __n_00 = *(ulong *)((long)__s2 + -0x18);
    do {
      __s1 = *(void **)*puVar5;
      uVar6 = *(ulong *)((long)__s1 + -0x18);
      lVar3 = uVar6 - __n_00;
      __n = __n_00;
                    /* try { // try from 0055c12c to 0065c19f has its CatchHandler @ 0055c2e0 */
      if (uVar6 < __n_00 || lVar3 == 0) {
        __n = uVar6;
      }
      iVar1 = memcmp(__s1,__s2,__n);
      if (iVar1 == 0) {
        if (lVar3 < 0x80000000) {
          iVar1 = (int)lVar3;
          if (lVar3 < -0x7fffffff) {
            iVar1 = -0x80000000;
          }
          goto LAB_0055c154;
        }
LAB_0055c198:
                    /* try { // try from 0055c1a0 to 0065c2af has its CatchHandler @ 0055b604 */
                    /* catch() { ... } // from try @ 0055badc with catch @ 0055c1a4 */
        if ((puVar4 != puVar5) || (puVar4 == *(undefined8 **)(this + 0x48))) goto LAB_0055c208;
        goto LAB_0055c1b0;
      }
LAB_0055c154:
                    /* catch() { ... } // from try @ 0055b820 with catch @ 0055c158
                       catch() { ... } // from try @ 0055b858 with catch @ 0055c158 */
      if (0 < iVar1) goto LAB_0055c198;
      if ((uVar6 == __n_00) && (iVar1 = memcmp(__s1,__s2,__n_00), iVar1 == 0)) {
        return;
      }
      puVar5 = puVar5 + 2;
    } while (puVar4 != puVar5);
  }
  puVar5 = puVar4;
  if (puVar4 == *(undefined8 **)(this + 0x48)) {
LAB_0055c208:
                    /* catch() { ... } // from try @ 0055bb24 with catch @ 0055c21c */
    std::
    vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
                     *)(this + 0x38),puVar5,param_1);
    return;
  }
  puVar2 = *(undefined8 **)param_1;
LAB_0055c1b0:
  *puVar4 = puVar2;
  lVar3 = *(long *)(param_1 + 8);
  puVar4[1] = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  *(undefined8 **)(this + 0x40) = puVar4 + 2;
                    /* catch() { ... } // from try @ 0055ba94 with catch @ 0055c1dc */
  return;
}


