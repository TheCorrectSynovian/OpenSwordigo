/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f3c40
 * Function: Caver::StoreViewController::ProductViewForProduct
 * Signature: undefined __thiscall ProductViewForProduct(StoreViewController * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::ProductViewForProduct(std::string const&) */

undefined8 __thiscall
Caver::StoreViewController::ProductViewForProduct(StoreViewController *this,string *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__s1;
  void *__s2;
  size_t __n;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x70);
  lVar2 = *(long *)(this + 0x78) - lVar1;
  if (lVar2 != 0) {
    __s2 = *(void **)param_1;
    lVar4 = 0;
    uVar5 = 0;
    __n = *(size_t *)((long)__s2 + -0x18);
    do {
      __s1 = *(void **)(lVar1 + uVar5 * 8);
      if ((*(size_t *)((long)__s1 + -0x18) == __n) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) {
        return *(undefined8 *)(*(long *)(*(long *)(this + 0x58) + 0x140) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < (ulong)(lVar2 >> 3));
  }
  return 0;
}


