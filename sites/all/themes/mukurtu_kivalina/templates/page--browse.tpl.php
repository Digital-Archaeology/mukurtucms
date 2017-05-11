<script src="https://use.typekit.net/zlb3hzu.js"></script>
<script>try{Typekit.load({ async: true });}catch(e){}</script>
<header id="navbar" role="banner" class="<?php //print $navbar_classes; ?>">
  <div class="">
    <!--
    <div class="navbar-header">
     <!--

      <?php if (!empty($site_name)): ?>
      <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div> -->

    <div class="navbar-bottom navbar-collapse collapse navbar container-fluid navbar-default">
      <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img height="22" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>
      <?php if (!empty($secondary_nav)): ?>
        <?php print render($secondary_nav); ?>
      <?php endif; ?>
    </div>
  </div>
</header>
<?php

/**
Custom template for the Single Browse page, stripped down to just the content.
 */

print $messages;

print render($page['content']);

