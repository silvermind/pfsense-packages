<?php
/*
	quagga_ospfd.priv.inc
	part of pfSense (http://www.pfSense.org/)
	Copyright (C) 2015 ESF, LLC
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

	1. Redistributions of source code must retain the above copyright notice,
	   this list of conditions and the following disclaimer.

	2. Redistributions in binary form must reproduce the above copyright
	   notice, this list of conditions and the following disclaimer in the
	   documentation and/or other materials provided with the distribution.

	THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
	INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
	AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
	AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
	OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
	SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
	INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
	CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/
global $priv_list;

$priv_list['page-services-quagga'] = array();
$priv_list['page-services-quagga']['name'] = "WebCfg - Services: Quagga OSPFd package";
$priv_list['page-services-quagga']['descr'] = "Allow access to Quagga OSPFd package GUI";

$priv_list['page-services-quagga']['match'] = array();
$priv_list['page-services-quagga']['match'][] = "pkg.php?xml=quagga_ospfd.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg.php?xml=quagga_ospfd_interfaces.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg.php?xml=quagga_ospfd_raw.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg.php?xml=bind_views.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg.php?xml=bind_zones.xml*";

$priv_list['page-services-quagga']['match'][] = "pkg_edit.php?xml=quagga_ospfd.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg_edit.php?xml=quagga_ospfd_interfaces.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg_edit.php?xml=quagga_ospfd_raw.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg_edit.php?xml=bind_views.xml*";
$priv_list['page-services-quagga']['match'][] = "pkg_edit.php?xml=bind_zones.xml*";

$priv_list['page-services-quagga']['match'][] = "status_ospfd.php*";

?>
