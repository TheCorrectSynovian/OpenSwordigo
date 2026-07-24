/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00310b9c
 * Function: Caver::CaverShell::ReleaseView
 * Signature: undefined __thiscall ReleaseView(CaverShell * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CaverShell::ReleaseView() */

void __thiscall Caver::CaverShell::ReleaseView(CaverShell *this)

{
  IFWKeyboardListener *pIVar1;
  IFWMouseListener *pIVar2;
  long lVar3;
  FWKeyboard *this_00;
  FWMouse *this_01;
  GameOptions *this_02;
  FontLibrary *this_03;
  ModelLibrary *this_04;
  TextureLibrary *this_05;
  AudioSystem *this_06;
  long lVar4;
  long lVar5;
  long *plVar6;
  GameOptions *local_48;
  long *local_40;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  this_00 = (FWKeyboard *)FWKeyboard::sharedKeyboard();
  pIVar1 = (IFWKeyboardListener *)0x0;
  if (*(long *)(this + 0x88) != 0) {
    pIVar1 = (IFWKeyboardListener *)(*(long *)(this + 0x88) + 0xf8);
  }
  FWKeyboard::RemoveListener(this_00,pIVar1);
  this_01 = (FWMouse *)FWMouse::sharedMouse();
  pIVar2 = (IFWMouseListener *)0x0;
  if (*(long *)(this + 0x88) != 0) {
    pIVar2 = (IFWMouseListener *)(*(long *)(this + 0x88) + 0xf0);
  }
  this_02 = (GameOptions *)FWMouse::RemoveListener(this_01,pIVar2);
  GameOptions::sharedOptions(this_02);
  GameOptions::SaveToFile(local_48);
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = local_40[2];
    local_40[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  (**(code **)(**(long **)(this + 0x98) + 0x30))();
  plVar6 = *(long **)(this + 0xa0);
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = *(long **)(this + 0x90);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  this_03 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::Clear(this_03);
  this_04 = (ModelLibrary *)ModelLibrary::sharedLibrary();
  ModelLibrary::Clear(this_04);
  this_05 = (TextureLibrary *)TextureLibrary::sharedLibrary();
  TextureLibrary::Clear(this_05);
  this_06 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::Shutdown(this_06);
  FontLibrary::SetSharedLibrary((FontLibrary *)0x0);
  ModelLibrary::SetSharedLibrary((ModelLibrary *)0x0);
  TextureLibrary::SetSharedLibrary((TextureLibrary *)0x0);
  AudioSystem::SetSharedSystem((AudioSystem *)0x0);
  SoundLibrary::SetSharedLibrary((SoundLibrary *)0x0);
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


