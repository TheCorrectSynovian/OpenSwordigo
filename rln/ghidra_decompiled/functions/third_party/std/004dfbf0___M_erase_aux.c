/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dfbf0
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>::_M_erase_aux
 * Signature: undefined __thiscall _M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>> * this, _Rb_tree_const_iterator param_1, _Rb_tree_const_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, unsigned long>,
   std::_Select1st<std::pair<std::string const, unsigned long> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, unsigned long> >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const, unsigned long> >,
   std::_Rb_tree_const_iterator<std::pair<std::string const, unsigned long> >) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
::_M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
               *this,_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     *param_2,
              _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var6;
  void *pvVar7;
  undefined *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  if ((this + 8 == param_3) &&
     (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
        **)(this + 0x18) == param_2)) {
    _M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
      **)(this + 0x18) = param_3;
    *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
      **)(this + 0x20) = param_3;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (param_2 != param_3) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                *)FUN_0064c6a0(param_2);
      pvVar7 = (void *)FUN_0064ca60(param_2,this + 8);
      puVar8 = (undefined *)(*(long *)((long)pvVar7 + 0x20) + -0x18);
      if (puVar8 != puVar5) {
        piVar10 = (int *)(*(long *)((long)pvVar7 + 0x20) + -8);
        if (puVar4 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete(puVar8);
        }
      }
      operator_delete(pvVar7);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      param_2 = p_Var6;
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


