/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3458
 * Function: std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>> * this, __normal_iterator param_1, UniformVariable * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::RenderingProgramShader::UniformVariable,
   std::allocator<Caver::RenderingProgramShader::UniformVariable>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,
   std::vector<Caver::RenderingProgramShader::UniformVariable,
   std::allocator<Caver::RenderingProgramShader::UniformVariable> > >,
   Caver::RenderingProgramShader::UniformVariable const&) */

void __thiscall
std::
vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>
::_M_insert_aux(vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>
                *this,UniformVariable *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  UniformVariable *pUVar10;
  UniformVariable *pUVar11;
  undefined *puVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  long local_78 [2];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  puVar2 = *(undefined4 **)(this + 8);
  if (puVar2 == *(undefined4 **)(this + 0x10)) {
    lVar14 = *(long *)this;
    lVar18 = (long)puVar2 - lVar14;
    uVar17 = lVar18 >> 4;
    uVar16 = uVar17;
    if (lVar18 == 0) {
      uVar16 = 1;
    }
    uVar1 = 0xfffffffffffffff;
    if (!CARRY8(uVar16,uVar17) && uVar16 + uVar17 >> 0x3c == 0) {
      uVar1 = uVar16 + uVar17;
    }
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pUVar10 = operator_new(uVar1 << 4);
    *(undefined4 *)(pUVar10 + ((long)param_2 - lVar14 >> 4) * 0x10) = *param_3;
    FUN_0066a528(pUVar10 + ((long)param_2 - lVar14 >> 4) * 0x10 + 8,param_3 + 2);
    pUVar11 = __uninitialized_copy<false>::
              __uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
                        (*(UniformVariable **)this,param_2,pUVar10);
    pUVar11 = __uninitialized_copy<false>::
              __uninit_copy<Caver::RenderingProgramShader::UniformVariable*,Caver::RenderingProgramShader::UniformVariable*>
                        (param_2,*(UniformVariable **)(this + 8),pUVar11 + 0x10);
    puVar9 = PTR_DAT_007e5de8;
    puVar8 = PTR_pthread_create_007e4e78;
    pvVar19 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    if (pvVar19 != pvVar3) {
      do {
        puVar12 = (undefined *)(*(long *)((long)pvVar19 + 8) + -0x18);
        if (puVar12 != puVar9) {
          piVar13 = (int *)(*(long *)((long)pvVar19 + 8) + -8);
          if (puVar8 == (undefined *)0x0) {
            iVar15 = *piVar13;
            *piVar13 = iVar15 + -1;
          }
          else {
            do {
              iVar15 = *piVar13;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (iVar15 < 1) {
            operator_delete(puVar12);
          }
        }
        pvVar19 = (void *)((long)pvVar19 + 0x10);
      } while (pvVar19 != pvVar3);
      pvVar19 = *(void **)this;
    }
    if (pvVar19 != (void *)0x0) {
      operator_delete(pvVar19);
    }
    *(UniformVariable **)this = pUVar10;
    *(UniformVariable **)(this + 8) = pUVar11;
    *(UniformVariable **)(this + 0x10) = pUVar10 + uVar1 * 0x10;
  }
  else {
    *puVar2 = puVar2[-4];
    FUN_0066a528(puVar2 + 2,puVar2 + -2);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
    uVar4 = *param_3;
                    /* catch() { ... } // from try @ 005d0ca0 with catch @ 005d34cc
                       catch() { ... } // from try @ 005d0d44 with catch @ 005d34cc */
    FUN_0066a528(local_78,param_3 + 2);
                    /* catch() { ... } // from try @ 005d11a0 with catch @ 005d34dc
                       catch() { ... } // from try @ 005d11b4 with catch @ 005d34dc
                       catch() { ... } // from try @ 005d1324 with catch @ 005d34dc
                       catch() { ... } // from try @ 005d1338 with catch @ 005d34dc
                       catch() { ... } // from try @ 005d1418 with catch @ 005d34dc
                       catch() { ... } // from try @ 005d14fc with catch @ 005d34dc
                       catch() { ... } // from try @ 005d1510 with catch @ 005d34dc */
                    /* catch() { ... } // from try @ 005d16e0 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d16f4 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d17e0 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d17f4 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d18e8 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d18fc with catch @ 005d34e0
                       catch() { ... } // from try @ 005d199c with catch @ 005d34e0
                       catch() { ... } // from try @ 005d1a88 with catch @ 005d34e0
                       catch() { ... } // from try @ 005d1a9c with catch @ 005d34e0 */
    uVar16 = (*(long *)(this + 8) + -0x20) - (long)param_2;
                    /* catch() { ... } // from try @ 005d0e84 with catch @ 005d34e4
                       catch() { ... } // from try @ 005d0e98 with catch @ 005d34e4 */
    if (0 < (long)uVar16) {
      lVar18 = (uVar16 >> 4) + 1;
      lVar14 = *(long *)(this + 8) + -0x18;
      do {
        *(undefined4 *)(lVar14 + -8) = *(undefined4 *)(lVar14 + -0x18);
        FUN_0066a6a8(lVar14,lVar14 + -0x10);
        lVar18 = lVar18 + -1;
        lVar14 = lVar14 + -0x10;
      } while (1 < lVar18);
    }
    *(undefined4 *)param_2 = uVar4;
    FUN_0066a6a8(param_2 + 8,local_78);
                    /* catch() { ... } // from try @ 005d0c18 with catch @ 005d3534
                       catch() { ... } // from try @ 005d0c2c with catch @ 005d3534
                       catch() { ... } // from try @ 005d0d70 with catch @ 005d3534 */
    if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_78[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar13;
        *piVar13 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_78[0] + -0x18));
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


