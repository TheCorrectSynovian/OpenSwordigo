/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055de04
 * Function: Caver::ObjectLibrary::ContainsTexture
 * Signature: undefined __thiscall ContainsTexture(ObjectLibrary * this, Texture * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::ContainsTexture(Caver::Texture*, bool) */

undefined8 __thiscall
Caver::ObjectLibrary::ContainsTexture(ObjectLibrary *this,Texture *param_1,bool param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *__s2;
  uint uVar6;
  size_t __n;
  long *plVar7;
  
  if (this[0x80] == (ObjectLibrary)0x0) {
    plVar7 = *(long **)(this + 0x50);
    plVar1 = *(long **)(this + 0x58);
    if (plVar1 != plVar7) {
      __s2 = *(void **)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 0055dd18 with catch @ 0055de5c */
      __n = *(size_t *)((long)__s2 + -0x18);
      do {
                    /* try { // try from 0055de80 to 0065def7 has its CatchHandler @ 0055defc */
        if ((*(size_t *)((long)*(void **)(*plVar7 + 0x30) + -0x18) == __n) &&
           (iVar3 = memcmp(*(void **)(*plVar7 + 0x30),__s2,__n), iVar3 == 0)) {
          return 1;
        }
        plVar7 = plVar7 + 1;
      } while (plVar1 != plVar7);
    }
    if (param_2) {
      puVar5 = *(undefined8 **)(this + 0x38);
      puVar2 = *(undefined8 **)(this + 0x40);
      this[0x80] = (ObjectLibrary)0x1;
      if (puVar5 == puVar2) {
        this[0x80] = (ObjectLibrary)0x0;
      }
      else {
        uVar6 = 0;
        do {
                    /* catch() { ... } // from try @ 0055dce8 with catch @ 0055deac
                       catch() { ... } // from try @ 0055dd60 with catch @ 0055deac */
                    /* catch() { ... } // from try @ 0055dcc0 with catch @ 0055deb0 */
          uVar4 = ContainsTexture((ObjectLibrary *)*puVar5,param_1,true);
          if ((uVar4 & 1) == 0) {
            puVar5 = puVar5 + 2;
          }
          uVar6 = uVar4 | uVar6;
        } while ((puVar5 != puVar2) && ((uVar4 & 1) == 0));
        this[0x80] = (ObjectLibrary)0x0;
        if ((uVar6 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


