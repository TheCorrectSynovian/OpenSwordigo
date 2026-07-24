/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055dad0
 * Function: Caver::ObjectLibrary::IsLibraryImported
 * Signature: undefined __thiscall IsLibraryImported(ObjectLibrary * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::IsLibraryImported(std::string const&, bool) */

undefined4 __thiscall
Caver::ObjectLibrary::IsLibraryImported(ObjectLibrary *this,string *param_1,bool param_2)

{
  int iVar1;
  ulong uVar2;
  void *__s2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(this + 0x38);
  puVar5 = *(undefined8 **)(this + 0x40);
  puVar3 = puVar4;
  if (puVar5 != puVar4) {
    __s2 = *(void **)param_1;
                    /* catch() { ... } // from try @ 0055d9d8 with catch @ 0055db04 */
    __n = *(size_t *)((long)__s2 + -0x18);
    puVar6 = puVar4;
    do {
                    /* try { // try from 0055db24 to 0065db4b has its CatchHandler @ 0055db50 */
      if ((*(size_t *)((long)*(void **)*puVar6 + -0x18) == __n) &&
         (iVar1 = memcmp(*(void **)*puVar6,__s2,__n), iVar1 == 0)) {
        return 1;
      }
      puVar6 = puVar6 + 2;
      puVar3 = puVar5;
    } while (puVar5 != puVar6);
  }
                    /* try { // try from 0055db4c to 0065dc23 has its CatchHandler @ 0055d93c */
  if ((puVar3 != puVar4) && (param_2)) {
    do {
      puVar5 = puVar4 + 2;
                    /* catch() { ... } // from try @ 0055d980 with catch @ 0055db54 */
      uVar2 = IsLibraryImported((ObjectLibrary *)*puVar4,param_1,true);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      puVar4 = puVar5;
    } while (puVar3 != puVar5);
  }
  return 0;
}


