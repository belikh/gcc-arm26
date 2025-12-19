/* Definitions of target machine for GNU compiler, for ARM targeting RISC OS.
   Copyright (C) 2025 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#undef SUBTARGET_CPP_SPEC
#define SUBTARGET_CPP_SPEC "-D__riscos__ -D__arm2__"

#undef LINK_SPEC
#define LINK_SPEC "%{m26bit:-m armelf_riscos} %{!m26bit:-m armelf}"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC ""
