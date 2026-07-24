/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589fe0
 * Function: std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>
 * Signature: string * __cdecl _M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__normal_iterator param_1, __normal_iterator param_2, istreambuf_iterator param_3, istreambuf_iterator param_4, __false_type param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0058a028 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::string& std::string::_M_replace_dispatch<std::istreambuf_iterator<char,
   std::char_traits<char> > >(__gnu_cxx::__normal_iterator<char*, std::string >,
   __gnu_cxx::__normal_iterator<char*, std::string >, std::istreambuf_iterator<char,
   std::char_traits<char> >, std::istreambuf_iterator<char, std::char_traits<char> >,
   std::__false_type) */

string * std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>
                   (string *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  ulong *puVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589fac with catch @ 00589fe4
                        */
                    /* catch() { ... } // from try @ 00589ffc with catch @ 00589fe8 */
                    /* try { // try from 00589ff8 to 00689ffb has its CatchHandler @ 0058a00c */
  lVar3 = tpidr_el0;
                    /* try { // try from 00589ffc to 0068a01f has its CatchHandler @ 00589fe8 */
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00589ff8 with catch @ 0058a00c */
                    /* try { // try from 0058a020 to 0068a06b has its CatchHandler @ 0058a020
                       catch() { ... } // from try @ 0058a020 with catch @ 0058a020
                       catch() { ... } // from try @ 0058ac18 with catch @ 0058a020
                       catch() { ... } // from try @ 0058b638 with catch @ 0058a020 */
  pcVar4 = _S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>
                     (param_1,param_5,param_6,param_7,auStack_60);
  puVar8 = (ulong *)(pcVar4 + -0x18);
  if ((ulong)(((param_3 - param_2) + 0x3ffffffffffffff9) - *(long *)(*(long *)param_1 + -0x18)) <
      *puVar8) {
                    /* try { // try from 0058a0f4 to 0068a107 has its CatchHandler @ 0058b274 */
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_dispatch");
  }
  psVar5 = (string *)FUN_00669110(param_1,param_2 - *(long *)param_1,param_3 - param_2,pcVar4);
                    /* try { // try from 0058a06c to 0068a077 has its CatchHandler @ 0058b47c */
                    /* try { // try from 0058a078 to 0068a07f has its CatchHandler @ 0058b27c */
  if (puVar8 != (ulong *)PTR_DAT_007e5de8) {
    piVar6 = (int *)(pcVar4 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
                    /* try { // try from 0058a0ec to 0068a0f3 has its CatchHandler @ 0058b278 */
      operator_delete(puVar8);
    }
  }
                    /* try { // try from 0058a080 to 0068a0e7 has its CatchHandler @ 0058b47c */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return psVar5;
}


