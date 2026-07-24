/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cc80
 * Function: operator.delete
 * Signature: void __cdecl operator.delete(void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* operator delete(void*) */

void operator_delete(void *param_1)

{
  (*(code *)PTR_free_007ded20)();
  return;
}


