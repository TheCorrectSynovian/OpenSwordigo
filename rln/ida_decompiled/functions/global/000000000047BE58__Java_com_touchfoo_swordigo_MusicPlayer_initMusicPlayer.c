/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047BE58
 * Mangled: Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer
 * Demangled: Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 54
 *   insn=0x000000000047BE68 string=0x000000000047BE6C "u"
 *   insn=0x000000000047BE70 string=0x000000000047BE74 "h"
 *   insn=0x000000000047BE78 string=0x000000000047BE7C "U@"
 *   insn=0x000000000047BE80 string=0x000000000047BE84 "h"
 *   insn=0x000000000047BE88 string=0x000000000047BE8C "h"
 *   insn=0x000000000047BE94 string=0x000000000047BE98 "}@"
 *   insn=0x000000000047BEA4 string=0x000000000047BEA8 "t"
 *   insn=0x000000000047BEB0 string=0x000000000047BEB4 "\t"
 *   insn=0x000000000047BEB0 string=0x000000000059654B "loadFile"
 *   insn=0x000000000047BEB8 string=0x000000000047BEBC "B,"
 *   insn=0x000000000047BEB8 string=0x00000000005960F4 "(Ljava/lang/String;)Z"
 *   insn=0x000000000047BEBC string=0x000000000047BEC0 "c"
 *   insn=0x000000000047BEC0 string=0x000000000047BEC4 ")"
 *   insn=0x000000000047BEC8 string=0x000000000047BECC " "
 *   insn=0x000000000047BED0 string=0x000000000047BED4 "i"
 *   insn=0x000000000047BED4 string=0x000000000047BED8 " m"
 *   insn=0x000000000047BEDC string=0x000000000047BEE0 "\t"
 *   insn=0x000000000047BEE4 string=0x000000000059604E "()V"
 *   insn=0x000000000047BEE8 string=0x000000000047BEEC "s:"
 *   insn=0x000000000047BEE8 string=0x0000000000596554 "play"
 *   insn=0x000000000047BEEC string=0x000000000047BEF0 ")"
 *   insn=0x000000000047BEF0 string=0x000000000047BEF4 "BP"
 *   insn=0x000000000047BEFC string=0x000000000047BF00 " "
 *   insn=0x000000000047BF04 string=0x000000000047BF08 "i"
 *   insn=0x000000000047BF08 string=0x000000000047BF0C " q"
 *   insn=0x000000000047BF10 string=0x000000000047BF14 "\t"
 *   insn=0x000000000047BF18 string=0x000000000059A796 "pause"
 *   insn=0x000000000047BF20 string=0x000000000047BF24 ")"
 *   insn=0x000000000047BF28 string=0x000000000047BF2C " "
 *   insn=0x000000000047BF30 string=0x000000000047BF34 "i"
 *   insn=0x000000000047BF34 string=0x000000000047BF38 " u"
 *   insn=0x000000000047BF3C string=0x000000000047BF40 "\t"
 *   insn=0x000000000047BF44 string=0x0000000000596559 "stop"
 *   insn=0x000000000047BF4C string=0x000000000047BF50 ")"
 *   insn=0x000000000047BF54 string=0x000000000047BF58 " "
 *   insn=0x000000000047BF5C string=0x000000000047BF60 "i"
 *   insn=0x000000000047BF60 string=0x000000000047BF64 " y"
 *   insn=0x000000000047BF68 string=0x000000000047BF6C "\t"
 *   insn=0x000000000047BF70 string=0x000000000059655E "setLooping"
 *   insn=0x000000000047BF74 string=0x000000000047BF78 "Bx"
 *   insn=0x000000000047BF74 string=0x000000000059617A "(Z)V"
 *   insn=0x000000000047BF78 string=0x000000000047BF7C ")"
 *   insn=0x000000000047BF7C string=0x000000000047BF80 "c"
 *   insn=0x000000000047BF84 string=0x000000000047BF88 " "
 *   insn=0x000000000047BF8C string=0x000000000047BF90 "i"
 *   insn=0x000000000047BF90 string=0x000000000047BF94 " }"
 *   insn=0x000000000047BF98 string=0x000000000047BF9C "\t"
 *   insn=0x000000000047BFA0 string=0x0000000000596569 "setVolume"
 *   insn=0x000000000047BFA4 string=0x000000000047BFA8 "B"
 *   insn=0x000000000047BFA4 string=0x0000000000596573 "(F)V"
 *   insn=0x000000000047BFA8 string=0x000000000047BFAC ")"
 *   insn=0x000000000047BFAC string=0x000000000047BFB0 "c"
 *   insn=0x000000000047BFB4 string=0x000000000047BFB8 " "
 *   insn=0x000000000047BFC0 string=0x000000000047BFC4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Java_com_touchfoo_swordigo_MusicPlayer_initMusicPlayer(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  qword_6E9CC0 = a1;
  qword_6E9CC8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  qword_6E9CD0 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 248LL))(a1, a2);
  qword_6E9CD8 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9CC0
                                                                                         + 264LL))(
                   qword_6E9CC0,
                   qword_6E9CD0,
                   "loadFile",
                   "(Ljava/lang/String;)Z");
  qword_6E9CE0 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9CC0
                                                                                         + 264LL))(
                   qword_6E9CC0,
                   qword_6E9CD0,
                   "play",
                   "()V");
  qword_6E9CE8 = (__int64)(*(_QWORD *(__fastcall **)(__int64 __return_ptr, __int64, __int64, char *, const char *))(*(_QWORD *)qword_6E9CC0 + 264LL))(
                            qword_6E9CC0,
                            qword_6E9CC0,
                            qword_6E9CD0,
                            "pause",
                            "()V");
  qword_6E9CF0 = (__int64)(*(_QWORD *(__fastcall **)(__int64 __return_ptr, __int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9CC0 + 264LL))(
                            qword_6E9CC0,
                            qword_6E9CC0,
                            qword_6E9CD0,
                            "stop",
                            "()V");
  qword_6E9CF8 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9CC0
                                                                                         + 264LL))(
                   qword_6E9CC0,
                   qword_6E9CD0,
                   "setLooping",
                   "(Z)V");
  result = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9CC0 + 264LL))(
             qword_6E9CC0,
             qword_6E9CD0,
             "setVolume",
             "(F)V");
  qword_6E9D00 = result;
  return result;
}

