/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd608
 * Function: Caver::TextureLibrary::PurgeTexturesIfNecessary
 * Signature: undefined __thiscall PurgeTexturesIfNecessary(TextureLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::PurgeTexturesIfNecessary() */

void __thiscall Caver::TextureLibrary::PurgeTexturesIfNecessary(TextureLibrary *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  Texture *this_00;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  do {
    if (*(int *)(this + 0x3c) <= *(int *)(this + 0x40)) {
LAB_005cd710:
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar5 = *(long *)(this + 0x48);
    lVar3 = *(long *)(this + 0x50);
    if (lVar5 == lVar3) {
      RefreshUnusedTexturesList(this);
      lVar5 = *(long *)(this + 0x48);
      lVar3 = *(long *)(this + 0x50);
      if (lVar5 == lVar3) goto LAB_005cd710;
    }
    while (lVar5 != lVar3) {
      puVar4 = (undefined8 *)(lVar3 + -8);
      this_00 = (Texture *)*puVar4;
      if (this_00 == (Texture *)0x0) {
        *(undefined8 **)(this + 0x50) = puVar4;
      }
      else {
        iVar2 = *(int *)(this_00 + 8);
        *(undefined8 **)(this + 0x50) = puVar4;
        *(int *)(this_00 + 8) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
      }
      iVar2 = Texture::TextureRetainCount(this_00);
      if (iVar2 == 2) {
        local_40 = 0;
        SetTextureForName(this,(string *)(this_00 + 0x30),(intrusive_ptr *)&local_40);
        if ((this_00 != (Texture *)0x0) &&
           (iVar2 = *(int *)(this_00 + 8), *(int *)(this_00 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
        break;
      }
      if ((this_00 != (Texture *)0x0) &&
         (iVar2 = *(int *)(this_00 + 8), *(int *)(this_00 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*(long *)this_00 + 8))(this_00);
      }
      lVar3 = *(long *)(this + 0x50);
      lVar5 = *(long *)(this + 0x48);
    }
  } while( true );
}


