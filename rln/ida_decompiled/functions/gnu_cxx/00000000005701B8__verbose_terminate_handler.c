/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005701B8
 * Mangled: _ZN9__gnu_cxx27__verbose_terminate_handlerEv
 * Demangled: __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callers: 2
 *   0x000000000051E01C  std::set_terminate(void (*)(void))
 *   0x000000000051E038  std::get_terminate(void)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5B20  .fputs
 *   0x00000000001F6550  .fwrite
 *   0x00000000001F7A90  .__cxa_current_exception_type
 *   0x00000000001F89E0  .free
 *   0x00000000001F8DD0  .fputc
 *   0x00000000001FC0D0  .__cxa_demangle
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE620  .abort
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000005701D0 string=0x00000000005701D4 "!"
 *   insn=0x00000000005701D0 string=0x0000000000570284 "`"
 *   insn=0x00000000005701D8 string=0x00000000005701DC "-"
 *   insn=0x00000000005701DC string=0x00000000001F7A90 "0'"
 *   insn=0x00000000005701E0 string=0x0000000000570318 "`"
 *   insn=0x00000000005701FC string=0x0000000000570200 "e"
 *   insn=0x0000000000570210 string=0x00000000001FC0D0 "0'"
 *   insn=0x0000000000570218 string=0x000000000057021C "`"
 *   insn=0x000000000057021C string=0x000000000059FC30 "terminate called after throwing an instance of '"
 *   insn=0x0000000000570224 string=0x0000000000570228 "!"
 *   insn=0x0000000000570234 string=0x00000000001F6550 "0'"
 *   insn=0x0000000000570244 string=0x0000000000570248 "6"
 *   insn=0x0000000000570248 string=0x00000000001F5B20 "P'"
 *   insn=0x000000000057024C string=0x0000000000570250 "`"
 *   insn=0x0000000000570250 string=0x0000000000570258 "!"
 *   insn=0x0000000000570250 string=0x000000000059FC68 "'\n"
 *   insn=0x0000000000570258 string=0x000000000057025C "B"
 *   insn=0x000000000057025C string=0x0000000000570260 "c"
 *   insn=0x000000000057026C string=0x0000000000570270 "@J"
 *   insn=0x0000000000570278 string=0x000000000057027C ")"
 *   insn=0x0000000000570284 string=0x0000000000570288 "!"
 *   insn=0x0000000000570284 string=0x000000000059FC10 "terminate called recursively\n"
 *   insn=0x0000000000570294 string=0x0000000000570298 "chF"
 *   insn=0x0000000000570298 string=0x000000000057029C "c"
 *   insn=0x00000000005702AC string=0x00000000005702B0 "0J"
 *   insn=0x00000000005702AC string=0x00000000001F89E0 "0'"
 *   insn=0x00000000005702B4 string=0x00000000005702B8 "!"
 *   insn=0x00000000005702C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005702C4 string=0x00000000005702C8 "B@"
 *   insn=0x00000000005702C8 string=0x00000000005702CC "@"
 *   insn=0x00000000005702D4 string=0x00000000005702D8 "`"
 *   insn=0x00000000005702D8 string=0x000000000059FCA0 "  what():  "
 *   insn=0x00000000005702E0 string=0x00000000005702E4 "b"
 *   insn=0x00000000005702E4 string=0x00000000005702E8 "c"
 *   insn=0x00000000005702F4 string=0x00000000005702F8 "!"
 *   insn=0x00000000005702F8 string=0x00000000005702FC "\t"
 *   insn=0x0000000000570300 string=0x0000000000570304 "@"
 *   insn=0x0000000000570304 string=0x0000000000570308 "!"
 *   insn=0x000000000057030C string=0x00000000001F8DD0 "0'"
 *   insn=0x0000000000570310 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000570318 string=0x000000000057031C "!"
 *   insn=0x0000000000570318 string=0x000000000059FC70 "terminate called without an active exception\n"
 *   insn=0x0000000000570334 string=0x0000000000570338 "cE"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn __gnu_cxx::__verbose_terminate_handler(void)
{
  struct type_info *v0; // x0
  const char *v1; // x0
  int v2; // w4
  const char *v3; // x19
  char *v4; // x22
  FILE *v5; // x20
  size_t v6; // x2
  const char *v7; // x0
  int v8; // [xsp+4Ch] [xbp+4Ch] BYREF

  if ( byte_6FD328 )
  {
    v6 = 29;
    v7 = "terminate called recursively\n";
  }
  else
  {
    byte_6FD328 = 1;
    v0 = __cxa_current_exception_type();
    if ( v0 )
    {
      v1 = (const char *)*((_QWORD *)v0 + 1);
      v2 = *(unsigned __int8 *)v1;
      v8 = -1;
      if ( v2 == 42 )
        v3 = v1 + 1;
      else
        v3 = v1;
      v4 = __cxa_demangle(v3, 0, 0, &v8);
      v5 = (FILE *)((char *)&_sF + 304);
      fwrite("terminate called after throwing an instance of '", 1u, 0x30u, (FILE *)((char *)&_sF + 304));
      if ( v8 )
        fputs(v3, v5);
      else
        fputs(v4, v5);
      fwrite("'\n", 1u, 2u, (FILE *)((char *)&_sF + 304));
      if ( v8 )
        __cxa_rethrow();
      free(v4);
      __cxa_rethrow();
    }
    v7 = "terminate called without an active exception\n";
    v6 = 45;
  }
  fwrite(v7, 1u, v6, (FILE *)((char *)&_sF + 304));
  abort();
}

