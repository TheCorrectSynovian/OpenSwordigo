/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7128
 * Mangled: _ZN6google8protobuf8internal13VersionStringEi
 * Demangled: google::protobuf::internal::VersionString(int)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7870  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000001FD430  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000001FE520  .snprintf
 *   0x00000000001FE620  .abort
 *   0x00000000004D7284  google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&)
 *   0x00000000004D7338  google::protobuf::internal::InitLogSilencerCount(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000004D7138 string=0x00000000004D713C "h"
 *   insn=0x00000000004D713C string=0x00000000004D7144 "i"
 *   insn=0x00000000004D7144 string=0x00000000004D7148 "T"
 *   insn=0x00000000004D7148 string=0x00000000004D714C "I"
 *   insn=0x00000000004D714C string=0x00000000004D7150 "|("
 *   insn=0x00000000004D7154 string=0x00000000004D7158 "|)"
 *   insn=0x00000000004D715C string=0x00000000004D7160 ""
 *   insn=0x00000000004D7164 string=0x00000000004D7168 "h"
 *   insn=0x00000000004D7168 string=0x00000000004D716C "k"
 *   insn=0x00000000004D716C string=0x00000000004D7170 "h"
 *   insn=0x00000000004D7170 string=0x00000000004D7174 "\t})"
 *   insn=0x00000000004D7178 string=0x00000000004D717C "*"
 *   insn=0x00000000004D717C string=0x00000000004D7180 ")"
 *   insn=0x00000000004D7180 string=0x00000000004D7184 ")"
 *   insn=0x00000000004D7184 string=0x00000000004D7188 "\n}"
 *   insn=0x00000000004D718C string=0x00000000004D7190 "$"
 *   insn=0x00000000004D718C string=0x0000000000598567 "%d.%d.%d"
 *   insn=0x00000000004D7194 string=0x00000000004D7198 "B"
 *   insn=0x00000000004D71C8 string=0x00000000004D71DC "=|"
 *   insn=0x00000000004D71DC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D71F4 string=0x00000000004D71F8 "h"
 *   insn=0x00000000004D71FC string=0x00000000004D7200 "a"
 *   insn=0x00000000004D7200 string=0x00000000004D720C "`"
 *   insn=0x00000000004D720C string=0x00000000004D7210 "a"
 *   insn=0x00000000004D7214 string=0x00000000004D7218 "!"
 *   insn=0x00000000004D721C string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D722C string=0x00000000001F7870 "0'"
 *   insn=0x00000000004D7238 string=0x00000000004D723C "}"
 *   insn=0x00000000004D723C string=0x00000000001FD430 "0'"
 *   insn=0x00000000004D7244 string=0x00000000004D7248 "`"
 *   insn=0x00000000004D7244 string=0x00000000004D7264 "h"
 *   insn=0x00000000004D724C string=0x00000000004D7250 "a"
 *   insn=0x00000000004D7250 string=0x00000000004D7254 ""
 *   insn=0x00000000004D7254 string=0x00000000004D7258 "b"
 *   insn=0x00000000004D7258 string=0x00000000004D725C "cb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall google::protobuf::internal::VersionString@<X0>(google::protobuf::internal *this@<X0>, int a2@<W8>)
{
  char s[128]; // [xsp+38h] [xbp-98h] BYREF
  __int64 v5; // [xsp+B8h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  snprintf(s, 0x80u, "%d.%d.%d", (int)this / 1000000, (int)this / 1000 % 1000, (int)this % 1000);
  s[127] = 0;
  return sub_566BB8(a2, s);
}

