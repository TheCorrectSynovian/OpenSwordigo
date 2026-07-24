/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d81f0
 * Function: Caver::Proto::SoundLibrary::~SoundLibrary
 * Signature: undefined __thiscall ~SoundLibrary(SoundLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::~SoundLibrary() */

void __thiscall Caver::Proto::SoundLibrary::~SoundLibrary(SoundLibrary *this)

{
  SoundLibrary *pSVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(this + 0x1c);
  pSVar1 = *(SoundLibrary **)(this + 0x10);
  *(undefined **)this = PTR_vtable_007e58e8 + 0x10;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pSVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pSVar1 = *(SoundLibrary **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pSVar1 != this + 0x28) && (pSVar1 != (SoundLibrary *)0x0)) {
    operator_delete__(pSVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


