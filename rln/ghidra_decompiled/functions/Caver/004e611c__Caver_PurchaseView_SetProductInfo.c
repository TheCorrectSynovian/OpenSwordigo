/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e611c
 * Function: Caver::PurchaseView::SetProductInfo
 * Signature: undefined __thiscall SetProductInfo(PurchaseView * this, string * param_1, vector param_2, string * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::SetProductInfo(std::string const&, std::vector<std::string,
   std::allocator<std::string > >, std::string const&, float) */

void __thiscall
Caver::PurchaseView::SetProductInfo
          (float param_1_00,PurchaseView *this,undefined8 *param_1,long *param_4,bool param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  GUIView *this_00;
  FontLibrary *this_01;
  size_t __n;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  GUIFrameView *this_02;
  GUILabel *pGVar8;
  long lVar9;
  ulong uVar10;
  GUILabel *local_98;
  long *local_90;
  undefined4 local_88 [2];
  undefined4 local_80 [2];
  GUILabel *local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pGVar8 = *(GUILabel **)(this + 0xf0);
  __n = *(size_t *)((long)*param_1 + -0x18);
  if ((__n != *(size_t *)((long)*(void **)(pGVar8 + 0x100) + -0x18)) ||
     (iVar3 = memcmp((void *)*param_1,*(void **)(pGVar8 + 0x100),__n), iVar3 != 0)) {
    FUN_0066a6a8(pGVar8 + 0x100,param_1);
    GUILabel::UpdateText(pGVar8);
  }
  lVar5 = *param_4;
  if (param_4[1] != lVar5) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      local_80[0] = 0xe5abd6e5;
      local_88[0] = 0xff000000;
      GameInterfaceBuilder::NormalLabel
                ((GameInterfaceBuilder *)&local_78,lVar5 + lVar9,local_80,local_88);
      pGVar8 = local_78;
      this_01 = (FontLibrary *)FontLibrary::sharedLibrary();
      FontLibrary::SmallDefaultFont(this_01);
      if (local_98 != *(GUILabel **)(pGVar8 + 0xf0)) {
        if (local_90 != (long *)0x0) {
          local_90[1] = local_90[1] + 1;
        }
        plVar7 = *(long **)(pGVar8 + 0xf8);
        *(GUILabel **)(pGVar8 + 0xf0) = local_98;
        *(long **)(pGVar8 + 0xf8) = local_90;
        if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar5 = plVar7[2];
          plVar7[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
        GUILabel::UpdateText(pGVar8);
      }
      plVar7 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar5 = local_90[1], local_90[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      local_78[0x138] = (GUILabel)0x1;
      GUILabel::UpdateText(local_78);
      puVar1 = *(undefined8 **)(this + 0x108);
      if (puVar1 == *(undefined8 **)(this + 0x110)) {
        std::
        vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
                         *)(this + 0x100),puVar1,&local_78);
      }
      else {
        *puVar1 = local_78;
        puVar1[1] = local_70;
        if (local_70 != (long *)0x0) {
          local_70[1] = local_70[1] + 1;
        }
        *(undefined8 **)(this + 0x108) = puVar1 + 2;
      }
      pcVar6 = *(code **)(*(long *)this + 0x60);
      local_98 = local_78;
      local_90 = local_70;
      if (local_70 != (long *)0x0) {
        local_70[1] = local_70[1] + 1;
      }
      (*pcVar6)(this,&local_98);
      plVar7 = local_90;
      if ((local_90 != (long *)0x0) &&
         (lVar5 = local_90[1], local_90[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_90 + 0x10))(local_90);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      plVar7 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar5 = local_70[1], local_70[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      lVar5 = *param_4;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar10 < (ulong)(param_4[1] - lVar5 >> 3));
  }
  this_02 = *(GUIFrameView **)(this + 0x118);
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  TextureLibrary::TextureForName(psVar4,param_5);
  GUIFrameView::SetFrameTexture(this_02,(intrusive_ptr *)&local_78,true);
  if ((local_78 != (GUILabel *)0x0) &&
     (iVar3 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*(long *)local_78 + 8))();
  }
  this_00 = *(GUIView **)(this + 0x118);
  plVar7 = *(long **)(this_00 + 0x100);
  if (plVar7 != (long *)0x0) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  }
  local_78 = *(GUILabel **)(this_00 + 0x74);
  local_70 = (long *)CONCAT44((float)((ulong)*(undefined8 *)((long)plVar7 + 0x54) >> 0x20) *
                              param_1_00,(float)*(undefined8 *)((long)plVar7 + 0x54) * param_1_00);
  GUIView::SetFrame(this_00,(Rectangle *)&local_78);
  iVar3 = (int)plVar7[1] + -1;
  *(int *)(plVar7 + 1) = iVar3;
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


