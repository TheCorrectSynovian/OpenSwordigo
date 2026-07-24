/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038777c
 * Function: Caver::MagicExplosionComponent::Prepare
 * Signature: undefined __thiscall Prepare(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicExplosionComponent::Prepare() */

void __thiscall Caver::MagicExplosionComponent::Prepare(MagicExplosionComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  CreateStarPolygon(this);
  *(undefined8 *)(this + 0xfc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_48,"particle_explosion",auStack_50);
  TextureLibrary::TextureForName(psVar4,SUB81(&local_48,0));
  uStack_58 = _UNK_00688c38;
  local_60 = _DAT_00688c30;
  Sprite::InitWithTexture
            ((Sprite *)(this + 0x108),(intrusive_ptr *)&local_40,(Rectangle *)&local_60);
  if ((local_40 != (long *)0x0) &&
     (iVar6 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  if ((undefined *)(local_48 + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


