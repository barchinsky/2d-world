  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Themisto/src/Core/ApplicationManager.cpp at master · Ockonal/Themisto · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="kzfeEybNXAJEaZ2vofdX8tp1Pb9vf/ac9dm1snt2pCo=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-6c7984e384129edf1958345326c26471eedcdc23.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-a68b3668ef12bc14777039845b05c8ea61e43c35.css" media="screen" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-5dcdaf734c8092261f37e6534c8f114696d913a9.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-2cf4d0aa606ff4b0201e77c9366b440255e3dee2.js" type="text/javascript"></script>
      

        <link rel='permalink' href='/Ockonal/Themisto/blob/66da2a232cfcabf86dd30a41d972042243b5df00/src/Core/ApplicationManager.cpp'>
    <meta property="og:title" content="Themisto"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/Ockonal/Themisto"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/611f8c4f76f1dbb26984b6bfb6b833b6?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="2D indie-game. Contribute to Themisto development by creating an account on GitHub."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="Ockonal/Themisto"/>

    <meta name="description" content="2D indie-game. Contribute to Themisto development by creating an account on GitHub." />

  <link href="https://github.com/Ockonal/Themisto/commits/master.atom" rel="alternate" title="Recent Commits to Themisto:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public env-production  ">
    <div id="wrapper">

      

      

      

      


        <div class="header header-logged-out">
          <div class="container clearfix">

            <a class="header-logo-wordmark" href="https://github.com/">
              <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1338956357" />
              <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1338956357" />
            </a>

              
<ul class="top-nav">
    <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
  <li class="search"><a href="https://github.com/search">Search</a></li>
  <li class="features"><a href="https://github.com/features">Features</a></li>
    <li class="blog"><a href="https://github.com/blog">Blog</a></li>
</ul>


            <div class="header-actions">
                <a class="button primary" href="https://github.com/signup">Sign up for free</a>
              <a class="button" href="https://github.com/login?return_to=%2FOckonal%2FThemisto%2Fblob%2Fmaster%2Fsrc%2FCore%2FApplicationManager.cpp">Sign in</a>
            </div>

          </div>
        </div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


<ul class="pagehead-actions">



    <li>
      <a href="/login?return_to=%2FOckonal%2FThemisto"
        class="minibutton js-toggler-target star-button entice tooltipped upwards"
        title="You must be signed in to use this feature" rel="nofollow">
        <span class="mini-icon mini-icon-star"></span>Star
      </a>
      <a class="social-count js-social-count" href="/Ockonal/Themisto/stargazers">
        9
      </a>
    </li>
    <li>
      <a href="/login?return_to=%2FOckonal%2FThemisto"
        class="minibutton js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="mini-icon mini-icon-fork"></span>Fork
      </a>
      <a href="/Ockonal/Themisto/network" class="social-count">
        2
      </a>
    </li>
</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/Ockonal" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">Ockonal</span>
                  </a></span> /
                <strong><a href="/Ockonal/Themisto" class="js-current-repository">Themisto</a></strong>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/Ockonal/Themisto" class="selected" highlight="[:repo_source, :repo_downloads, :repo_commits, :repo_tags, :repo_branches]">Code</a></li>
    <li><a href="/Ockonal/Themisto/network" highlight="[:repo_network]">Network</a></li>
    <li><a href="/Ockonal/Themisto/pulls" highlight="[:repo_pulls]">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/Ockonal/Themisto/issues" highlight="[:repo_issues]">Issues <span class='counter'>5</span></a></li>

      <li><a href="/Ockonal/Themisto/wiki" highlight="[:repo_wiki]">Wiki</a></li>


    <li><a href="/Ockonal/Themisto/graphs" highlight="[:repo_graphs, :repo_contributors]">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/Ockonal/Themisto/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">1</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="mini-icon mini-icon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container js-select-menu-pane">

        <div class="select-menu-modal js-select-menu-pane">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-select-menu-text-filter js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div> <!-- /.select-menu-text-filter -->
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches" data-filterable-for="commitish-filter-field" data-filterable-type="substring">


              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/level/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="level" rel="nofollow" title="level">level</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target selected">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/master/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/NewObjects/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="NewObjects" rel="nofollow" title="NewObjects">NewObjects</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/Objects2Environ/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Objects2Environ" rel="nofollow" title="Objects2Environ">Objects2Environ</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/RemoveEnviron/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="RemoveEnviron" rel="nofollow" title="RemoveEnviron">RemoveEnviron</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/ScriptSystem/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="ScriptSystem" rel="nofollow" title="ScriptSystem">ScriptSystem</a>
              </div> <!-- /.select-menu-item -->
              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/UNSTABLE/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="UNSTABLE" rel="nofollow" title="UNSTABLE">UNSTABLE</a>
              </div> <!-- /.select-menu-item -->

              <div class="select-menu-no-results js-not-filterable">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags" data-filterable-for="commitish-filter-field" data-filterable-type="substring">

              <div class="select-menu-item js-navigation-item js-navigation-target ">
                <span class="select-menu-checkmark mini-icon mini-icon-confirm"></span>
                <a href="/Ockonal/Themisto/blob/Stable-Physic/src/Core/ApplicationManager.cpp" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Stable-Physic" rel="nofollow" title="Stable-Physic">Stable-Physic</a>
              </div> <!-- /.select-menu-item -->

            <div class="select-menu-no-results js-not-filterable">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/Ockonal/Themisto" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/Ockonal/Themisto/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/Ockonal/Themisto/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">7</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:48613104b06ccfc257fdd89d90b7b45d -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:48613104b06ccfc257fdd89d90b7b45d -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ockonal/Themisto" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">Themisto</span></a></span></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ockonal/Themisto/tree/master/src" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">src</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ockonal/Themisto/tree/master/src/Core" class="js-slide-to" data-direction="back" itemscope="url"><span itemprop="title">Core</span></a></span> / <strong class="final-path">ApplicationManager.cpp</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="src/Core/ApplicationManager.cpp" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
        </div>

      <a href="/Ockonal/Themisto/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/611f8c4f76f1dbb26984b6bfb6b833b6?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/Ockonal" rel="author">Ockonal</a></span>
    <time class="js-relative-date" datetime="2011-08-01T03:46:54-07:00" title="2011-08-01 03:46:54">August 01, 2011</time>
    <div class="commit-title">
        <a href="/Ockonal/Themisto/commit/9a3e4b0a991a2003a737fa7a385a4cc04489ff7c" class="message">Fixed camera movement in fullscreen. Fixed bug with different screen …</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/611f8c4f76f1dbb26984b6bfb6b833b6?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/Ockonal">Ockonal</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/Ockonal/Themisto/blob/66da2a232cfcabf86dd30a41d972042243b5df00/src/Core/ApplicationManager.cpp" data-title="Themisto/src/Core/ApplicationManager.cpp at master · Ockonal/Themisto · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>93 lines (74 sloc)</span>
                <span>2.642 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                      <a class="minibutton js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  <a href="/Ockonal/Themisto/raw/master/src/Core/ApplicationManager.cpp" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/Ockonal/Themisto/blame/master/src/Core/ApplicationManager.cpp" class="button minibutton ">Blame</a>
                  <a href="/Ockonal/Themisto/commits/master/src/Core/ApplicationManager.cpp" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="data type-c js-blob-data">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
</pre>
          </td>
          <td width="100%">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm">   Copyright 2010-2011 Tyslenko Max, Bogatirev Pavel.</span></div><div class='line' id='LC3'><br/></div><div class='line' id='LC4'><span class="cm">   This program is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC5'><span class="cm">   it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC6'><span class="cm">   the Free Software Foundation; either version 3, or (at your option)</span></div><div class='line' id='LC7'><span class="cm">   any later version.</span></div><div class='line' id='LC8'><br/></div><div class='line' id='LC9'><span class="cm">   This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC10'><span class="cm">   but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC11'><span class="cm">   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC12'><span class="cm">   GNU General Public License for more details.</span></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'><span class="cm">   You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC15'><span class="cm">   along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC16'><span class="cm">*/</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#include &lt;boost/cstdint.hpp&gt;</span></div><div class='line' id='LC19'><br/></div><div class='line' id='LC20'><span class="cp">#include &quot;Core/ApplicationManager.hpp&quot;</span></div><div class='line' id='LC21'><span class="cp">#include &quot;Core/ConfigManager.hpp&quot;</span></div><div class='line' id='LC22'><span class="cp">#include &quot;Core/LogManager.hpp&quot;</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="n">ApplicationManager</span><span class="o">::~</span><span class="n">ApplicationManager</span><span class="p">()</span></div><div class='line' id='LC25'><span class="p">{</span> <span class="p">}</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="n">ApplicationManager</span><span class="o">::</span><span class="n">ApplicationManager</span><span class="p">()</span><span class="o">:</span></div><div class='line' id='LC28'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mRunning</span><span class="p">(</span><span class="kc">true</span><span class="p">),</span> <span class="n">mLastTime</span><span class="p">(</span><span class="n">CL_System</span><span class="o">::</span><span class="n">get_time</span><span class="p">()),</span> <span class="n">mCurrentTime</span><span class="p">(</span><span class="mi">0</span><span class="p">),</span> <span class="n">mTimeDifference</span><span class="p">(</span><span class="mi">0</span><span class="p">),</span> <span class="n">mDeltaTimeMs</span><span class="p">(</span><span class="mi">0</span><span class="p">)</span> <span class="p">{}</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="kt">void</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">frameStarted</span><span class="p">()</span></div><div class='line' id='LC31'><span class="p">{</span></div><div class='line' id='LC32'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mCurrentTime</span> <span class="o">=</span> <span class="n">CL_System</span><span class="o">::</span><span class="n">get_time</span><span class="p">();</span></div><div class='line' id='LC33'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mTimeDifference</span> <span class="o">=</span> <span class="n">mCurrentTime</span> <span class="o">-</span> <span class="n">mLastTime</span><span class="p">;</span></div><div class='line' id='LC34'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">mTimeDifference</span> <span class="o">&gt;</span> <span class="mi">1000</span><span class="p">)</span> <span class="n">mTimeDifference</span> <span class="o">=</span> <span class="mi">1000</span><span class="p">;</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mDeltaTimeMs</span> <span class="o">=</span> <span class="k">static_cast</span><span class="o">&lt;</span><span class="kt">float</span><span class="o">&gt;</span><span class="p">(</span><span class="n">mTimeDifference</span><span class="p">);</span></div><div class='line' id='LC36'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mLastTime</span> <span class="o">=</span> <span class="n">mCurrentTime</span><span class="p">;</span></div><div class='line' id='LC37'><span class="p">}</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="kt">void</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">frameEnded</span><span class="p">()</span></div><div class='line' id='LC40'><span class="p">{</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mCurrentTime</span> <span class="o">=</span> <span class="n">CL_System</span><span class="o">::</span><span class="n">get_time</span><span class="p">();</span></div><div class='line' id='LC42'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">int</span> <span class="n">mainLoopRate</span> <span class="o">=</span> <span class="mi">10</span><span class="p">;</span> <span class="c1">// 100 hz</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">sleepTime</span> <span class="o">=</span> <span class="n">mainLoopRate</span> <span class="o">-</span> <span class="p">(</span><span class="n">mCurrentTime</span> <span class="o">-</span> <span class="n">mLastTime</span><span class="p">);</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">sleepTime</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="n">CL_System</span><span class="o">::</span><span class="n">sleep</span><span class="p">(</span><span class="n">sleepTime</span><span class="p">);</span></div><div class='line' id='LC45'><span class="p">}</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="kt">int</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">getFps</span><span class="p">()</span></div><div class='line' id='LC48'><span class="p">{</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mFps</span><span class="p">;</span></div><div class='line' id='LC50'><span class="p">}</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="kt">float</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">getElapsed</span><span class="p">()</span></div><div class='line' id='LC53'><span class="p">{</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mDeltaTimeMs</span><span class="p">;</span></div><div class='line' id='LC55'><span class="p">}</span></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'><span class="kt">bool</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">getRunning</span><span class="p">()</span></div><div class='line' id='LC58'><span class="p">{</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mRunning</span><span class="p">;</span></div><div class='line' id='LC60'><span class="p">}</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="kt">void</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">setRunning</span><span class="p">(</span><span class="kt">bool</span> <span class="n">state</span><span class="p">)</span></div><div class='line' id='LC63'><span class="p">{</span></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mRunning</span> <span class="o">=</span> <span class="n">state</span><span class="p">;</span></div><div class='line' id='LC65'><span class="p">}</span></div><div class='line' id='LC66'><br/></div><div class='line' id='LC67'><span class="n">CL_GraphicContext</span> <span class="o">&amp;</span><span class="n">ApplicationManager</span><span class="o">::</span><span class="n">getGraphic</span><span class="p">()</span></div><div class='line' id='LC68'><span class="p">{</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mWindow</span><span class="p">.</span><span class="n">get_gc</span><span class="p">();</span></div><div class='line' id='LC70'><span class="p">}</span></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'><span class="n">CL_DisplayWindow</span> <span class="o">&amp;</span><span class="n">ApplicationManager</span><span class="o">::</span><span class="n">getWindow</span><span class="p">()</span></div><div class='line' id='LC73'><span class="p">{</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">mWindow</span><span class="p">;</span></div><div class='line' id='LC75'><span class="p">}</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="kt">void</span> <span class="n">ApplicationManager</span><span class="o">::</span><span class="n">initWindow</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">title</span><span class="p">)</span></div><div class='line' id='LC78'><span class="p">{</span></div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Initializating part</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int16_t</span> <span class="n">width</span> <span class="o">=</span> <span class="n">configManager</span><span class="p">().</span><span class="n">getValue</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span><span class="p">(</span><span class="s">&quot;window.width&quot;</span><span class="p">,</span> <span class="mi">640</span><span class="p">);</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int16_t</span> <span class="n">height</span> <span class="o">=</span> <span class="n">configManager</span><span class="p">().</span><span class="n">getValue</span><span class="o">&lt;</span><span class="kt">int</span><span class="o">&gt;</span><span class="p">(</span><span class="s">&quot;window.height&quot;</span><span class="p">,</span> <span class="mi">480</span><span class="p">);</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">fullscreen</span> <span class="o">=</span> <span class="n">configManager</span><span class="p">().</span><span class="n">getValue</span><span class="o">&lt;</span><span class="kt">bool</span><span class="o">&gt;</span><span class="p">(</span><span class="s">&quot;window.fullscreen&quot;</span><span class="p">,</span> <span class="kc">false</span><span class="p">);</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CL_DisplayWindowDescription</span> <span class="n">desc</span><span class="p">(</span><span class="n">title</span><span class="p">);</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">desc</span><span class="p">.</span><span class="n">set_fullscreen</span><span class="p">(</span><span class="n">fullscreen</span><span class="p">);</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">desc</span><span class="p">.</span><span class="n">set_size</span><span class="p">(</span><span class="n">CL_Size</span><span class="p">(</span><span class="n">width</span><span class="p">,</span> <span class="n">height</span><span class="p">),</span> <span class="kc">false</span><span class="p">);</span></div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">mWindow</span> <span class="o">=</span> <span class="n">CL_DisplayWindow</span><span class="p">(</span><span class="n">desc</span><span class="p">);</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CL_GraphicContext</span> <span class="n">gc</span> <span class="o">=</span> <span class="n">getGraphic</span><span class="p">();</span></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">CL_Mat4f</span> <span class="n">matrix</span> <span class="o">=</span> <span class="n">CL_Mat4f</span><span class="o">::</span><span class="n">scale</span><span class="p">(</span> <span class="p">(</span><span class="kt">float</span><span class="p">)</span><span class="n">gc</span><span class="p">.</span><span class="n">get_width</span><span class="p">()</span> <span class="o">/</span> <span class="n">width</span><span class="p">,</span> <span class="p">(</span><span class="kt">float</span><span class="p">)</span><span class="n">gc</span><span class="p">.</span><span class="n">get_height</span><span class="p">()</span> <span class="o">/</span> <span class="n">height</span><span class="p">,</span> <span class="mf">1.0f</span><span class="p">);</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gc</span><span class="p">.</span><span class="n">set_modelview</span><span class="p">(</span><span class="n">matrix</span><span class="p">);</span></div><div class='line' id='LC92'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543528" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.04900s from fe1.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/Ockonal/Themisto/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.04945' data-host='fe1'></span>
    
  </body>
</html>

