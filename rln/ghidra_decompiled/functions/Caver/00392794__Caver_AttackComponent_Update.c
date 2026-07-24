/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392794
 * Function: Caver::AttackComponent::Update
 * Signature: undefined __thiscall Update(AttackComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AttackComponent::Update(float) */

void __thiscall Caver::AttackComponent::Update(AttackComponent *this,float param_1)

{
  AttackComponent AVar1;
  float fVar2;
  long *plVar3;
  long lVar4;
  SoundEffectComponent *this_00;
  CollisionShapeComponent *pCVar5;
  float fVar6;
  
  if (this[0x100] == (AttackComponent)0x0) {
    *(float *)(this + 0x110) = *(float *)(this + 0x110) + param_1;
    return;
  }
  plVar3 = *(long **)(this + 0x80);
  *(float *)(this + 0x10c) = *(float *)(this + 0x10c) + param_1;
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))();
  if (*(float *)(lVar4 + 0xc) < *(float *)(this + 0x130)) {
    *(undefined2 *)(this + 0x125) = 0;
    this_00 = *(SoundEffectComponent **)(this + 200);
    if (this_00 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
      this_00 = *(SoundEffectComponent **)(this + 200);
      if (this_00 == (SoundEffectComponent *)0x0) goto LAB_00392818;
    }
    SoundEffectComponent::Play(this_00);
  }
LAB_00392818:
  plVar3 = *(long **)(this + 0x80);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))();
  fVar2 = DAT_00683734;
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(lVar4 + 0xc);
  if (*(float *)(this + 0x118) - *(float *)(this + 0x114) <= fVar2) {
LAB_00392918:
    if (fVar2 < *(float *)(this + 0x120) - *(float *)(this + 0x11c)) {
      plVar3 = *(long **)(this + 0x80);
      if (plVar3 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar3 = *(long **)(this + 0x80);
      }
      lVar4 = (**(code **)(*plVar3 + 0x108))();
      if (*(float *)(this + 0x11c) < *(float *)(lVar4 + 0xc)) {
        if (this[0x126] != (AttackComponent)0x0) {
          plVar3 = *(long **)(this + 0x80);
          if (plVar3 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            plVar3 = *(long **)(this + 0x80);
          }
          lVar4 = (**(code **)(*plVar3 + 0x108))();
          if (*(float *)(this + 0x120) <= *(float *)(lVar4 + 0xc)) goto LAB_003929b0;
        }
        AVar1 = this[0x124];
        this[0x126] = (AttackComponent)0x1;
        goto joined_r0x003929a8;
      }
    }
LAB_003929b0:
    if (this[0x124] == (AttackComponent)0x0) goto LAB_003929e0;
    pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
    if (pCVar5 == (CollisionShapeComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
      if (pCVar5 != (CollisionShapeComponent *)0x0) goto LAB_003929d4;
    }
    else {
LAB_003929d4:
      CollisionShapeComponent::SetEnabled(pCVar5,false);
    }
    this[0x124] = (AttackComponent)0x0;
LAB_003929e0:
    plVar3 = *(long **)(this + 0x80);
  }
  else {
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar3 = *(long **)(this + 0x80);
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    if (*(float *)(lVar4 + 0xc) <= *(float *)(this + 0x114)) goto LAB_00392918;
    if (this[0x125] != (AttackComponent)0x0) {
      plVar3 = *(long **)(this + 0x80);
      if (plVar3 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar3 = *(long **)(this + 0x80);
      }
      lVar4 = (**(code **)(*plVar3 + 0x108))();
      if (*(float *)(this + 0x118) <= *(float *)(lVar4 + 0xc)) goto LAB_00392918;
    }
    AVar1 = this[0x124];
    this[0x125] = (AttackComponent)0x1;
joined_r0x003929a8:
    if (AVar1 != (AttackComponent)0x0) goto LAB_003929e0;
    pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
    if (pCVar5 == (CollisionShapeComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
      if (pCVar5 != (CollisionShapeComponent *)0x0) goto LAB_003928fc;
    }
    else {
LAB_003928fc:
      CollisionShapeComponent::SetEnabled(pCVar5,true);
    }
    this[0x124] = (AttackComponent)0x1;
    plVar3 = *(long **)(this + 0x80);
  }
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))();
  if (*(char *)(lVar4 + 0x2c) == '\0') {
    if (this[0x101] == (AttackComponent)0x0) {
      plVar3 = *(long **)(this + 0x80);
      if (plVar3 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar3 = *(long **)(this + 0x80);
      }
      lVar4 = (**(code **)(*plVar3 + 0x108))();
      if ((*(char *)(lVar4 + 0x2c) != '\0') ||
         ((*(float *)(lVar4 + 0x28) - *(float *)(lVar4 + 0xc)) /
          (*(float *)(lVar4 + 0x30) * *(float *)(lVar4 + 0x34)) < _DAT_00684434)) goto LAB_00392a90;
      goto LAB_00392ac0;
    }
  }
  else if (this[0x101] == (AttackComponent)0x0) {
    if (*(float *)(this + 0x108) < *(float *)(this + 0x10c)) {
LAB_00392a90:
      if (this[0x100] != (AttackComponent)0x0) {
        lVar4 = *(long *)(this + 0xf8);
        this[0x101] = (AttackComponent)0x1;
        *(undefined2 *)(lVar4 + 0x2c) = 0x101;
        (**(code **)(**(long **)(lVar4 + 0x10) + 0x30))(0);
      }
    }
LAB_00392ac0:
    if (this[0x101] == (AttackComponent)0x0) {
      return;
    }
  }
  plVar3 = *(long **)(this + 0xf8);
  fVar6 = _DAT_00000020;
  if ((plVar3 != (long *)0x0) && (fVar6 = *(float *)(plVar3 + 4), (int)plVar3[1] == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if (fVar2 <= fVar6) {
    return;
  }
  *(undefined2 *)(this + 0x100) = 0;
  if (this[0x124] == (AttackComponent)0x0) {
    return;
  }
  pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
  if (pCVar5 == (CollisionShapeComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    pCVar5 = *(CollisionShapeComponent **)(this + 0x98);
    if (pCVar5 == (CollisionShapeComponent *)0x0) goto LAB_00392b40;
  }
  CollisionShapeComponent::SetEnabled(pCVar5,false);
LAB_00392b40:
  this[0x124] = (AttackComponent)0x0;
  return;
}


