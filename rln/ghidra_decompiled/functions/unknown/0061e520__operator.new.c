/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e520
 * Function: operator.new
 * Signature: void * __cdecl operator.new(ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  long *plVar3;
  
                    /* try { // try from 0061e530 to 0071e543 has its CatchHandler @ 0061eab8 */
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
                    /* try { // try from 0061e544 to 0071e553 has its CatchHandler @ 0061ea5c */
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
    pvVar1 = malloc(param_1);
  }
  plVar3 = (long *)__cxa_allocate_exception(8);
  *plVar3 = (long)(PTR_vtable_007e6088 + 0x10);
                    /* try { // try from 0061e588 to 0071e5bb has its CatchHandler @ 0061ebd0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar3,PTR_typeinfo_007e5020,PTR__bad_alloc_007e7b90);
}


