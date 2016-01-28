{{ "Generic aliases" | hr }}
### job control
alias STOP='killall -STOP'
alias CONT='killall -CONT'
### text manipulation
alias lnmerge="tr '\n' ' '"
alias titlecase="sed -r 's/((^|[[:blank:]])[[:alpha:]])([[:alpha:]]*)/\U\1\L\3/g'"
alias sigmafix="sed -r 's/σ([^[:alpha:]]|$)/ς\1'/g"
### program-specific shorthands
alias gvimt='gvim --remote-tab'
alias nyancat='telnet nyancat.dakko.us'
alias svnup='svn up --ignore-externals'

{{ ("OS-specific aliases for %s" % os) | hr }}
{% if os == "osx" -%}
alias ls='gls --color=tty'
alias sed=gsed
alias slt="open -a 'Sublime Text'"
alias sort=gsort
alias top='top -o cpu'
{%- elif os == "linux" -%}
# nothing yet!
{%- endif %}

{{ ("Host-specific aliases for %s" % hostid) | hr }}
{% if hostid == "dastardly-osx" -%}
alias pinplay-start="VBoxManage startvm 'Pin Play' --type headless"
alias pinplay-stop="VBoxManage controlvm 'Pin Play' acpipowerbutton"
alias tagit="open -a 'The Tagger'"
{% endif %}

{#-
### old/disabled aliases #####################################################
alias synergys='synergys -a 127.0.0.1 -f'
# vim:ft=sh
-#}