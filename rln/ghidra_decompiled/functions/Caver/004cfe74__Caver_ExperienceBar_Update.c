/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cfe74
 * Function: Caver::ExperienceBar::Update
 * Signature: undefined __thiscall Update(ExperienceBar * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::Update(float) */

void __thiscall Caver::ExperienceBar::Update(ExperienceBar *this,float param_1)

{
  shared_ptr *psVar1;
  long lVar2;
  GUIAnimation *pGVar3;
  GUIPropertyValue *pGVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  GUIAnimation *local_70;
  long *plStack_68;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  GUIView::Update((GUIView *)this,param_1);
  if (*(char *)(*(long *)(this + 0xf0) + 0x130) == '\0') {
    if (this[0x3f8] != (ExperienceBar)0x0) {
      if (*(long *)(this + 0x400) == 0) {
        pGVar3 = operator_new(0xc0);
        GUIAnimation::GUIAnimation(pGVar3);
        psVar1 = (shared_ptr *)(this + 0x400);
        local_70 = pGVar3;
        boost::detail::shared_count::shared_count<Caver::GUIAnimation>
                  ((shared_count *)&plStack_68,pGVar3);
        pGVar4 = (GUIPropertyValue *)
                 boost::detail::sp_enable_shared_from_this(&local_70,pGVar3,pGVar3);
        pGVar3 = *(GUIAnimation **)(this + 0x400);
        *(GUIAnimation **)(this + 0x400) = local_70;
        plVar6 = *(long **)(this + 0x408);
        *(long **)(this + 0x408) = plStack_68;
        local_70 = pGVar3;
        plStack_68 = plVar6;
        if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x10))(plVar6);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        lVar5 = *(long *)psVar1;
        *(undefined4 *)(lVar5 + 0x30) = 2;
        pGVar4 = (GUIPropertyValue *)GUIPropertyValue::ValueWithFloat(pGVar4,1.0);
        *(undefined4 *)(lVar5 + 0x70) = local_70._0_4_;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        plVar6 = *(long **)(lVar5 + 0x80);
        *(long **)(lVar5 + 0x78) = plStack_68;
        *(long **)(lVar5 + 0x80) = local_60;
        if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x10))(plVar6);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        plVar6 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
          pGVar4 = (GUIPropertyValue *)(**(code **)(*local_60 + 0x10))(local_60);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            pGVar4 = (GUIPropertyValue *)(**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        lVar5 = *(long *)psVar1;
        GUIPropertyValue::ValueWithFloat(pGVar4,0.0);
        *(undefined4 *)(lVar5 + 0x88) = local_70._0_4_;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        plVar6 = *(long **)(lVar5 + 0x98);
        *(long **)(lVar5 + 0x90) = plStack_68;
        *(long **)(lVar5 + 0x98) = local_60;
        if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        plVar6 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar5 = local_60[1], local_60[1] = lVar5 + -1, lVar5 + -1 == 0)) {
          (**(code **)(*local_60 + 0x10))(local_60);
          lVar5 = plVar6[2];
          plVar6[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
        lVar5 = *(long *)(this + 0x400);
        local_80 = 0x3f0000003f000000;
        uStack_78 = 0x3f0000003f000000;
        GUIAnimationCurve::GUIAnimationCurve
                  ((GUIAnimationCurve *)&local_70,(Vector2 *)&uStack_78,(Vector2 *)&local_80);
                    /* catch() { ... } // from try @ 004d0178 with catch @ 004d0148 */
        *(long **)(lVar5 + 0x3c) = plStack_68;
        *(GUIAnimation **)(lVar5 + 0x34) = local_70;
        *(undefined8 *)(lVar5 + 0x4c) = uStack_58;
        *(long **)(lVar5 + 0x44) = local_60;
                    /* try { // try from 004d0164 to 005d0177 has its CatchHandler @ 004d019c */
        *(undefined8 *)(*(long *)(this + 0x400) + 0x58) = 0x3f0000003f000000;
        GUIView::AddAnimation((GUIView *)this,psVar1);
      }
      else if (*(char *)(*(long *)(this + 0x400) + 0x54) != '\0') {
        this[0xe4] = (ExperienceBar)0x1;
      }
    }
  }
  else {
    UpdateText(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


