/*
 * This file is part of the opmsg crypto message framework.
 *
 * (C) 2015 by Sebastian Krahmer,
 *             sebastian [dot] krahmer [at] gmail [dot] com
 *
 * opmsg is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * opmsg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with opmsg.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>

namespace opmsg {

namespace marker {

extern std::string dh_begin;
extern std::string dh_end;

extern std::string sig_begin;
extern std::string sig_end;

extern std::string dh_params_begin;
extern std::string dh_params_end;

extern std::string opmsg_begin;
extern std::string opmsg_end;
extern std::string opmsg_databegin;

extern std::string kex_begin;
extern std::string kex_end;

extern std::string version;
extern std::string src_id;
extern std::string dst_id;
extern std::string kex_id;

extern std::string rsa_kex_id;

extern std::string algos;

}

}

