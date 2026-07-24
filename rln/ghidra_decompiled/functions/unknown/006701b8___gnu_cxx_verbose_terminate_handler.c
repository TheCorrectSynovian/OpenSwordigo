/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006701b8
 * Function: __gnu_cxx::__verbose_terminate_handler
 * Signature: undefined __cdecl __verbose_terminate_handler(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x006702a8) */
/* WARNING: Removing unreachable block (ram,0x0067033c) */
/* WARNING: Removing unreachable block (ram,0x006702bc) */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  FILE *__s;
  long lVar1;
  char *pcVar2;
  char *__s_00;
  size_t __n;
  
  if (DAT_007fd328 == '\0') {
    DAT_007fd328 = '\x01';
    lVar1 = __cxa_current_exception_type();
    if (lVar1 != 0) {
      pcVar2 = *(char **)(lVar1 + 8);
                    /* try { // try from 006701fc to 0077034b has its CatchHandler @ 006701fc
                       catch(type#1 @ 00000000) { ... } // from try @ 006701fc with catch @ 006701fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00670358 with catch @ 006701fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00670490 with catch @ 006701fc
                        */
      if (*pcVar2 == '*') {
        pcVar2 = pcVar2 + 1;
      }
      __s_00 = (char *)__cxa_demangle(pcVar2,0,0);
      __s = (FILE *)(PTR___sF_007e5cd0 + 0x130);
      fwrite("terminate called after throwing an instance of \'",1,0x30,__s);
      fputs(pcVar2,__s);
      do {
        fwrite(&DAT_0069fc68,1,2,(FILE *)(PTR___sF_007e5cd0 + 0x130));
        __cxa_rethrow();
        fputs(__s_00,__s);
      } while( true );
    }
    pcVar2 = "terminate called without an active exception\n";
    __n = 0x2d;
  }
  else {
    __n = 0x1d;
    pcVar2 = "terminate called recursively\n";
  }
  fwrite(pcVar2,1,__n,(FILE *)(PTR___sF_007e5cd0 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


