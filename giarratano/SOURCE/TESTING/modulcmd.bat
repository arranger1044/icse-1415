(clear)(defmodule d1 (export ?ALL))(defmodule d2 (import d1 ?ALL))(defmodule d3 (export ?ALL))(deftemplate t1)(deftemplate t2)(defmodule d4 (export deftemplate t3 t4) (import d3 deftemplate t1))(deftemplate t3)(deftemplate t4)(defmodule d5 (import d3 deftemplate t1 t2) (import d4 deftemplate ?ALL))(defmodule d6 (import d1 ?NONE) (import d3 deftemplate ?NONE))(defmodule *)(list-defmodules d6)(list-defmodules *)(list-defmodules)(ppdefmodule MAIN::d6)(ppdefmodule d6 d5)(ppdefmodule *)(ppdefmodule d1)(ppdefmodule d2)(ppdefmodule d3)(ppdefmodule d4)(ppdefmodule d5)(ppdefmodule d6)(get-defmodule-list MAIN)(get-defmodule-list)(get-current-module A)(get-current-module)(set-current-module)(set-current-module d1 d2)(set-current-module A)(set-current-module d3)(get-current-module)(set-current-module d3)(get-current-module)(set-current-module d6)(get-current-module)(clear)(list-defmodules)