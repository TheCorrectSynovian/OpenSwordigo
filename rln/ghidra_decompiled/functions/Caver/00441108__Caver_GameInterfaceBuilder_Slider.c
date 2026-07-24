/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00441108
 * Function: Caver::GameInterfaceBuilder::Slider
 * Signature: undefined __thiscall Slider(GameInterfaceBuilder * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::Slider(float, float) */

void __thiscall
Caver::GameInterfaceBuilder::Slider(GameInterfaceBuilder *this,float param_1,float param_2)

{
  GUIView GVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  string *psVar6;
  GUISlider *this_00;
  GUIView *this_01;
  bool bVar7;
  shared_ptr<Caver::GUISlider> *in_x8;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  long local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  long *local_68;
  long *local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_slider_frame",&local_68);
  bVar7 = SUB81(&local_80,0);
  TextureLibrary::TextureForName(psVar6,bVar7);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_slider_bar",auStack_50);
  TextureLibrary::TextureForName(psVar6,bVar7);
  if ((undefined *)(local_80 + -0x18) != puVar5) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_80,"ui_slider_peg",auStack_70);
  TextureLibrary::TextureForName(psVar6,bVar7);
  if ((undefined *)(local_80 + -0x18) != puVar5) {
    piVar8 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar7) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  this_00 = operator_new(0x170);
  GUISlider::GUISlider(this_00);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>(in_x8,this_00);
  GUISlider::SetFrameTexture(*(GUISlider **)in_x8,(intrusive_ptr *)&local_58);
  GUISlider::SetBarTexture(*(GUISlider **)in_x8,(intrusive_ptr *)&local_60);
  GUISlider::SetPegTexture(*(GUISlider **)in_x8,(intrusive_ptr *)&local_68);
  this_01 = *(GUIView **)in_x8;
  fVar10 = *(float *)(this_01 + 0x124);
  *(float *)(this_01 + 0x134) = param_1;
  if (param_1 <= fVar10) {
    fVar11 = *(float *)(this_01 + 0x128);
  }
  else {
    fVar11 = param_1;
    if (this_01[0x16c] != (GUIView)0x0) {
      fVar11 = (float)(int)param_1;
    }
    fVar10 = *(float *)(this_01 + 0x138);
    if (fVar11 <= *(float *)(this_01 + 0x138)) {
      fVar10 = fVar11;
    }
    if (fVar10 <= param_1) {
      fVar10 = param_1;
    }
    *(undefined4 *)(this_01 + 300) = 0;
    *(float *)(this_01 + 0x124) = fVar10;
    *(float *)(this_01 + 0x128) = fVar10;
    this_01[0x160] = (GUIView)0x1;
    fVar11 = fVar10;
  }
  if (fVar11 < param_1) {
    if (this_01[0x16c] != (GUIView)0x0) {
      fVar10 = (float)(int)fVar10;
    }
    fVar11 = *(float *)(this_01 + 0x138);
    if (fVar10 <= *(float *)(this_01 + 0x138)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar11;
    if (fVar11 <= param_1) {
      fVar10 = param_1;
    }
    *(undefined4 *)(this_01 + 300) = 0;
    *(float *)(this_01 + 0x124) = fVar10;
    *(float *)(this_01 + 0x128) = fVar10;
    this_01[0x160] = (GUIView)0x1;
  }
  this_01[0x160] = (GUIView)0x1;
  *(float *)(this_01 + 0x138) = param_2;
  if (fVar10 <= param_2) {
    fVar11 = *(float *)(this_01 + 0x128);
  }
  else {
    fVar11 = param_2;
    if (this_01[0x16c] != (GUIView)0x0) {
      fVar11 = (float)(int)param_2;
    }
    fVar10 = param_2;
    if (fVar11 <= param_2) {
      fVar10 = fVar11;
    }
    if (fVar10 <= param_1) {
      fVar10 = param_1;
    }
    *(undefined4 *)(this_01 + 300) = 0;
    *(float *)(this_01 + 0x124) = fVar10;
    *(float *)(this_01 + 0x128) = fVar10;
    this_01[0x160] = (GUIView)0x1;
    fVar11 = fVar10;
  }
  if (param_2 < fVar11) {
    GVar1 = this_01[0x16c];
    if (GVar1 != (GUIView)0x0) {
      fVar10 = (float)(int)fVar10;
    }
    fVar11 = param_2;
    if (fVar10 <= param_2) {
      fVar11 = fVar10;
    }
    if (fVar11 <= param_1) {
      fVar11 = param_1;
    }
    *(undefined4 *)(this_01 + 300) = 0;
    *(float *)(this_01 + 0x124) = fVar11;
    *(float *)(this_01 + 0x128) = fVar11;
    this_01[0x160] = (GUIView)0x1;
  }
  else {
    GVar1 = this_01[0x16c];
  }
  this_01[0x160] = (GUIView)0x1;
  fVar10 = param_1;
  if (GVar1 != (GUIView)0x0) {
    fVar10 = (float)(int)param_1;
  }
  if (fVar10 <= param_2) {
    param_2 = fVar10;
  }
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  *(undefined4 *)(this_01 + 300) = 0;
  *(float *)(this_01 + 0x124) = param_2;
  *(float *)(this_01 + 0x128) = param_2;
  this_01[0x160] = (GUIView)0x1;
  uStack_78 = *(undefined8 *)((long)local_60 + 0x54);
  local_80 = 0;
  GUIView::SetFrame(this_01,(Rectangle *)&local_80);
  if ((local_68 != (long *)0x0) &&
     (iVar9 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  if ((local_60 != (long *)0x0) &&
     (iVar9 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
  if ((local_58 != (long *)0x0) &&
     (iVar9 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


