/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054e488
 * Function: Caver::PODLoader::HasSkeleton
 * Signature: undefined __thiscall HasSkeleton(PODLoader * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::HasSkeleton() */

undefined8 __thiscall Caver::PODLoader::HasSkeleton(PODLoader *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 0054e4a0 to 0064e4c7 has its CatchHandler @ 0054e950 */
  iVar2 = *(int *)(*(long *)this + 0x48) + -1;
  if (-1 < iVar2) {
    puVar3 = (undefined8 *)(*(long *)(*(long *)this + 0x50) + (long)iVar2 * 0x60 + 8);
    do {
      iVar1 = strncmp((char *)*puVar3,"Bone",4);
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -0xc;
    } while (-1 < iVar2);
  }
  return 0;
}


